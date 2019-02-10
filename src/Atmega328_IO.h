/*
Created by RobotCing Team
*/
#ifndef Atmega328_IO
#define Atmega328_IO
#include "Arduino.h"
//--------------------------------------------
//              Creating Class
//--------------------------------------------
class Cing
{
// public variables
  public:
//constructor
    Cing();
    void RunMotor(String motor,int speed= 100,String mode = "digital");
    int ReadLightSensor(int sensor = 1,String mode = "digital");
    int ReadUltrasonicSensor();
    int ReadShineSensor(int sensor = 0);
    bool ReadButton();
    bool ReadButtonExternal();
    int ReadPotentiometer();
    float ReadTempSensor(int sensor = 0);
    int ReadIRSensor();
    void StartLed();
  	void SetLedColor(int led = 1,int red = 100,int green = 100,int blue = 100);
  	void ShowLed();
    int ReadColorSensor();
    void StartGyro(bool gyro_off = false);
    float ReadGyro(String axis,int mode="angle");
// local variables
  private:
    void sendMessage();
    void SensorMode();
};
#endif
