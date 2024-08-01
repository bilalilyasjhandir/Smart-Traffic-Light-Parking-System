# Smart Traffic Light Parking System

The "Smart Traffic Light Parking System" is an Arduino-based project designed to enhance parking safety and efficiency by dynamically adjusting traffic lights based on the proximity of vehicles. This system utilizes an ultrasonic sensor to detect the distance of approaching vehicles from the traffic lights, providing visual and auditory signals to drivers.

## Components

- **Arduino Board**
- **Traffic Lights**
- **Ultrasonic Sensor**
- **Piezo Buzzer**

## Software

- **Language:** C++
- **Platform:** Arduino IDE

## Functionality

### 1. Distance Sensing

The ultrasonic sensor continuously measures the distance between the traffic lights and any approaching vehicles. This distance is calculated based on the time taken for the ultrasonic waves to travel to the vehicle and return.

### 2. Traffic Light Control

Based on the measured distance, the Arduino determines the appropriate signal to display on the traffic lights:

- **Green Light:** Illuminated when the approaching vehicle is far away, indicating that it is safe to proceed.
- **Yellow Light:** Activated when the vehicle is closer, warning drivers to proceed with caution.
- **Red Light:** Displayed when the vehicle is very close, signaling drivers to stop.

### 3. Auditory Alert

In addition to the visual signals of the traffic lights, the piezo buzzer emits different tones to provide an auditory indication of the parking conditions:

- **Continuous Tone:** Green light, indicating a safe distance.
- **Medium Tone:** Yellow light, caution advised.
- **High-Pitched Tone:** Red light, stop immediately.

## Getting Started

1. **Assemble the Hardware:**
   - Connect the Arduino board, traffic lights, ultrasonic sensor, and piezo buzzer as per the project's circuit diagram.

2. **Install the Arduino IDE:**
   - Download and install the Arduino IDE from [Arduino's official website](https://www.arduino.cc/en/Main/Software).

3. **Upload the Code:**
   - Open the Arduino IDE, upload the provided C++ code to the Arduino board, and ensure all connections are secure.

4. **Testing:**
   - Test the system by simulating different vehicle distances and observing the corresponding traffic light signals and auditory alerts.
