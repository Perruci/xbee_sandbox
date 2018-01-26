#include "arduino.h"

void inline xbee_init()
{
  Serial.begin(9600);
}

void inline xbee_send(String msg)
{
  Serial.print(msg);
  Serial.write(10); // line break (\n)
}

void setup()
{
  xbee_init();
}

void loop()
{
  xbee_send("Hi, I'm XBee");
  delay(5000);
}
