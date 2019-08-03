//Library import
#include <Atmega328_IO.h>
//Constructor
Cing Cing;
void setup() {
  //Initialising Test using Serial port for comunication
  Cing.InitTest("PC");
}

void loop() {
  //Test running in loop using Serial port for comunication
  Cing.Test("PC");

}
