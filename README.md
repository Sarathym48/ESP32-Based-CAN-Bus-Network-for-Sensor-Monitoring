# ESP32-Based-CAN-Bus-Network-for-Sensor-Monitoring
Developed a two-node CAN bus network using ESP32 &amp; MCP2515 for reliable sensor data transmission in embedded systems.

ESP32-Based CAN Bus Network for Sensor Monitoring

This project demonstrates a simple CAN Bus network using the ESP32 microcontroller and the MCP2515 CAN controller module.
It includes both transmitter and receiver implementations for real-time sensor data communication over a robust CAN protocol.

Features:Uses ESP32 + MCP2515 (via SPI) for CAN bus communication and configured for 500 kbps baud rate with an 8 MHz crystal oscillator.

Demonstrates:

Sending CAN messages (transmitter).
Receiving and decoding CAN messages (receiver).
Extendable for multi-node sensor monitoring systems.

Hardware Requirements:

ESP32 Development Board
MCP2515 CAN Bus Module (with TJA1050 transceiver)
Jumper wires, Breadboard
CAN transceiver wiring (CAN_H ↔ CAN_H, CAN_L ↔ CAN_L between modules)
(Optional) Sensors to attach for real-time data transmission

Wiring (ESP32 ↔ MCP2515):

| MCP2515 Pin | ESP32 Pin                              |
| ----------- | -------------------------------------- |
| VCC         | 3.3V                                   |
| GND         | GND                                    |
| CS          | GPIO5 (Transmitter) / GPIO4 (Receiver) |
| SO (MISO)   | GPIO19                                 |
| SI (MOSI)   | GPIO23                                 |
| SCK         | GPIO18                                 |
| INT         | GPIO21 (optional, if using interrupts) |

Applications:

Sensor data acquisition in industrial environments
Automotive systems (ECU communication)
Robotics (multi-node coordination)
IoT systems requiring robust, noise-resistant communication

Future Improvements:

Add real sensors (temperature, pressure, etc.) instead of static data.
Implement multi-node CAN communication.
Store logs on SD card or send to cloud (ThingSpeak / Firebase).
Add error handling & CAN filters for optimized communication.
