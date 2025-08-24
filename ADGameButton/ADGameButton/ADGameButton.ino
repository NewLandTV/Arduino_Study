#include "Ardunity.h"
#include "DigitalInput.h"

DigitalInput dInput1(0, 6, true);
DigitalInput dInput2(1, 7, true);

void setup()
{
  ArdunityApp.attachController((ArdunityController*)&dInput1);
  ArdunityApp.attachController((ArdunityController*)&dInput2);
  ArdunityApp.resolution(256, 1024);
  ArdunityApp.timeout(5000);
  ArdunityApp.begin(115200);
}

void loop()
{
  ArdunityApp.process();
}
