# Arduino Ultrasonic Distance Monitor with 4 LEDs

This project uses an Arduino board to measure the distance from an ultrasonic sensor and display it on 4 LEDs. The LEDs will light up one by one according to the distance measured by the ultrasonic sensor.

## Components Used

- Arduino Board (Uno, Nano or any compatible board)
- Ultrasonic Sensor (HC-SR04)
- 4 LEDs (any color)
- 4 220 ohms resistors
- Jumper wires
- Breadboard

## Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

## How it Works

The Arduino board sends a trigger signal to the ultrasonic sensor, which then sends out an ultrasonic wave. The wave is reflected back by an object, and the sensor receives it. The time it takes for the wave to travel to the object and back to the sensor is measured, and the distance is calculated.

The distance is then mapped to the 4 LEDs using the following logic:
- LED 1: distance <= 100 cm
- LED 2: 100 cm < distance <= 200 cm
- LED 3: 200 cm < distance <= 300 cm
- LED 4: distance > 300 cm

## How to Use

1. Connect the components as shown in the circuit diagram.
2. Upload the `arduino_ultrasonic_distance.ino` sketch to the Arduino board.
3. Open the Serial Monitor in the Arduino IDE to see the distance readings.
4. Hold an object in front of the ultrasonic sensor and observe the LEDs lighting up one by one according to the distance measured.

## Acknowledgements

This project was inspired by [Instructables](https://www.instructables.com/Arduino-Ultrasonic-Distance-Measurement-With-4-LED/).

## License

This project is licensed under the [MIT License](LICENSE).
