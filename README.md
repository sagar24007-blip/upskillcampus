# IoT-Based Smart Home Automation

## Project Overview

This project presents an IoT-Based Smart Home Automation System using ESP8266 NodeMCU and the Blynk IoT platform. The system enables users to remotely monitor and control household electrical appliances through a smartphone over a Wi-Fi network.

## Features

- Remote control of home appliances
- Wi-Fi based communication
- Smartphone control using Blynk IoT
- Four-channel relay control
- Low-cost and energy-efficient solution
- Easy to install and expand

## Hardware Components

- ESP8266 NodeMCU
- 4-Channel Relay Module
- Wi-Fi Router
- AC Bulb/Fan (Demo Load)
- Jumper Wires
- 5V Power Supply

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- Blynk IoT
- Blynk Library

## Circuit Connections

| NodeMCU Pin | Relay Pin |
|-------------|-----------|
| D1 | IN1 |
| D2 | IN2 |
| D5 | IN3 |
| D6 | IN4 |
| VIN | VCC |
| GND | GND |

## Working Principle

1. ESP8266 connects to the Wi-Fi network.
2. The Blynk application sends commands through the cloud.
3. ESP8266 receives the commands.
4. Relay modules switch the connected appliances ON or OFF.
5. Users can monitor and control appliances from anywhere.

## Future Scope

- Voice control using Google Assistant or Alexa
- Energy monitoring
- Motion detection
- Smart scheduling
- AI-based automation
