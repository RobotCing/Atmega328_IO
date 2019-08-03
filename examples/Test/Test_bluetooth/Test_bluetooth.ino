//Library import
#include <Atmega328_IO.h>
//Constructor
Cing Cing;
void setup() {
  //Initialising Test using Bluetooth for comunication
  Cing.InitTest("Bluetooth");
}

void loop() {
  //Test running in loop using Bluetooth for comunication
  Cing.Test("Bluetooth");

}
