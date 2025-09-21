# ESP32-Based-CAN-Bus-Network-for-Sensor-Monitoring

This project demonstrates a simple CAN Bus network using the ESP32 microcontroller and the MCP2515 CAN controller module.It includes both transmitter and receiver implementations for real-time sensor data communication over a robust CAN protocol.

📌Features: 
1)Uses ESP32 + MCP2515 (via SPI) for CAN bus communication.
2)Configured for 500 kbps baud rate with an 8 MHz crystal oscillator.
3)Demonstrates:Sending CAN messages (transmitter), Receiving and decoding CAN messages (receiver) & Extendable for multi-node sensor monitoring systems.

🛠️Hardware Requirements:

1)ESP32 Development Board
2)MCP2515 CAN Bus Module (with TJA1050 transceiver)
3)Jumper wires, Breadboard
4)CAN transceiver wiring (CAN_H ↔ CAN_H, CAN_L ↔ CAN_L between modules)
5)(Optional) Sensors to attach for real-time data transmission

🔌Wiring (ESP32 ↔ MCP2515):

| MCP2515 Pin | ESP32 Pin                              |
| ----------- | -------------------------------------- |
| VCC         | 3.3V                                   |
| GND         | GND                                    |
| CS          | GPIO5 (Transmitter) / GPIO4 (Receiver) |
| SO (MISO)   | GPIO19                                 |
| SI (MOSI)   | GPIO23                                 |
| SCK         | GPIO18                                 |
| INT         | GPIO21 (optional, if using interrupts) |

📖Applications:

1)Sensor data acquisition in industrial environments
2)Automotive systems (ECU communication)
3)Robotics (multi-node coordination)
4)IoT systems requiring robust, noise-resistant communication

📌Future Improvements:

1)Add real sensors (temperature, pressure, etc.) instead of static data.
2)Implement multi-node CAN communication.
3)Store logs on SD card or send to cloud (ThingSpeak / Firebase).
4)Add error handling & CAN filters for optimized communication.
