#include <SPI.h>
#include <mcp_can.h>

#define CAN_CS 5  // Chip Select pin
MCP_CAN CAN(CAN_CS);

void setup() {
  Serial.begin(115200);

  while (CAN_OK != CAN.begin(MCP_ANY, CAN_500KBPS, MCP_8MHZ)) {
    Serial.println("CAN BUS Init Failed");
    delay(500);
  }

  Serial.println("CAN BUS Init OK!");
}

void loop() {
  byte data[] = {0x11, 0x22, 0x33, 0x44};

  byte sndStat = CAN.sendMsgBuf(0x100, 0, sizeof(data), data);

  if (sndStat == CAN_OK) {
    Serial.println("Message Sent Successfully!");
  } else {
    Serial.println("Error Sending Message...");
  }
  delay(1000);
}
