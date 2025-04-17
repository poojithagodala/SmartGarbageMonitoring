int inches = 0;
int distance= 0;
int led=13;
const int buzzer = 2;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  // measure the ping time in cm
  distance = 0.01723 * readUltrasonicDistance(7, 7);
  // convert to inches by dividing by 2.54
  inches = (distance / 2.54);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(distance);
  Serial.println("cm");
  delay(1000);

  if(distance > 5)
  {
    Serial.println("Dustbin is full");
    digitalWrite(led, HIGH);
    tone(buzzer, 1000);
    delay(1000);
  }
  else
  {
    Serial.println("Dustbin is empty");
    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(1000);
  }
}