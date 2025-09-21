#include <SPI.h>
#include <mcp_can.h>

#define CAN_CS 4  // CS pin for MCP2515 (D2 = GPIO4 on ESP32)

MCP_CAN CAN(CAN_CS);  // Create CAN object

void setup() {
  Serial.begin(115200);

  // Initialize MCP2515 CAN module at 500kbps with 8MHz oscillator
  while (CAN_OK != CAN.begin(MCP_ANY, CAN_500KBPS, MCP_8MHZ)) {
    Serial.println("CAN BUS Init Failed");
    delay(500);
  }

  Serial.println("CAN BUS Init OK!");
}

void loop() {
  // Check for received CAN message
  if (CAN_MSGAVAIL == CAN.checkReceive()) {
    long unsigned int rxId;
    byte len = 0;
    byte rxBuf[8];

    // Read message from MCP2515
    CAN.readMsgBuf(&rxId, &len, rxBuf);

    // Print CAN ID
    Serial.print("Message Received. ID: 0x");
    Serial.println(rxId, HEX);

    // Print data
    Serial.print("Data: ");
    for (int i = 0; i < len; i++) {
      if (rxBuf[i] < 0x10) Serial.print("0");  // Leading zero for single hex digits
      Serial.print(rxBuf[i], HEX);
      Serial.print(" ");
    }
    Serial.println();

    delay(500);  // Slow down output (500ms)
  }
}
