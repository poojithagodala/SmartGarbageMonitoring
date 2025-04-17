# Smart Garbage Monitoring System

This project is a simulation of a Smart Garbage Monitoring System built using Arduino UNO and TinkerCAD. It uses an ultrasonic sensor to detect the fill level of a dustbin and alerts using an LED and buzzer.

## 🛠 Technologies Used
- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- LED
- Buzzer
- Arduino IDE (C++ based sketch)
- TinkerCAD (for simulation)

## 🚀 How It Works
- The ultrasonic sensor measures the distance between the sensor and the garbage level.
- If the distance is less than or equal to 5 cm, the system considers the bin **empty**.
- If the distance exceeds 5 cm, it activates:
  - An LED (indicating a full bin).
  - A buzzer (for audible alert).

## 💡 Circuit Connections
| Component    | Arduino Pin |
|-------------|-------------|
| Ultrasonic Trigger/Echo | Pin 7       |
| LED         | Pin 13      |
| Buzzer      | Pin 2       |

## 🧪 Simulation
You can simulate this project using [TinkerCAD](https://www.tinkercad.com).

## 🧑‍💻 Author
Poojitha Godala

## 📄 License
This project is open source under the [MIT License](LICENSE).