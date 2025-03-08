# Line Follower Robot

This project is for a line follower robot using an Arduino and the Adafruit Motor Shield.

## Components

- Arduino
- Adafruit Motor Shield
- Two DC motors
- Two IR sensors

## Wiring

- Connect the left IR sensor to analog pin A4.
- Connect the right IR sensor to analog pin A5.
- Connect the motors to the motor shield.

## Code

The code for the line follower robot is in the `src/main.ino` file. It reads the values from the IR sensors and controls the motors accordingly.

## Setup

1. Install the Adafruit Motor Shield library.
2. Upload the code to the Arduino.

## Usage

1. Place the robot on a track with a line.
2. The robot will follow the line based on the sensor readings.

## License

This project is licensed under the MIT License.