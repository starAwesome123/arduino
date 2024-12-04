# IoT Controlled Robot Car

**Project Overview**

This project demonstrates a remote-controlled robot car that leverages the power of IoT. By combining an Arduino Uno, ESP01 WiFi module, and Arduino IoT Cloud, I have created a system that allows for real-time control and monitoring of the robot's movements.

**Hardware Components:**

* Arduino Uno
* ESP01 WiFi Module
* Motor Driver Shield
* DC Motors
* Batteries
* Breadboard
* Jumper Wires
* GPS Module

**Software Components:**

* Arduino IDE
* Arduino IoT Cloud

**Project Structure:**

* **arduino_control_motors:** Contains the Arduino code for controlling the robot's motors.
* **esp_iot_cloud:** Contains the ESP01 code for WiFi connectivity and IoT Cloud interaction.


**Getting Started:**

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/starAwesome123/iot_robot_car.git
  

2. **Build an iot arduino cloud:**
Make a profile in the iot arduino cloud to create the device and choose ESPino (ESP-12 Module) so you can work with the ESP01 and save the device keys, thinghs for the variables you will use, and the dashboard for sending commands for the car motion and receiving GPS data.

3. **Uploading the codes:**
After finishing all that upload the code of of the file (esp_iot_cloud) to the arduino cloud sketch, If for some reason you cannot upload the code from the cloud to the ESP01, try uploading it by the ardduino IDE desktop, and download the ESP8266 boards from the board manager to choose the board: ESPino (ESP-12 Module).
Then upload the file arduino_control_motors to the arduino uno, or any family of the arduino.
After that, turn on the robot in an outdoor place (because the GPS needs outdoor place to work) and try moving it by the arduino dashboard and see the data you receive.
