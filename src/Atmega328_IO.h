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
    uint8_t ReadUltrasonicSensor(String mode="Distance",int address = 16);
    int ReadShineSensor();
    bool ReadButton();
    bool ReadButtonExternal();
    int ReadPotentiometer();
    float ReadTempSensor(int sensor = 0);
    void InitLed();
  	void SetLedColor(int led = 1,int red = 100,int green = 100,int blue = 100);
  	void ShowLed();
    int ReadColorSensor();
    void InitGyro(bool gyro_off = false);
    float ReadGyro(String axis,int mode="angle");
    int ReadShineArray(int sensor=1);
    void Test(String mode = "digital");
    void InitTest();
    void InitIR();
    int ReadIR();
    void InitLidar();
    int ReadLidar();
    void InitServo(String servo = "C");
    void SetServo(String servo = "C",int angle = 0);
// local variables
  private:
    void sendMessage();
    void SensorMode();
    String Check(uint8_t address);
    void SetIRValue();
};
#endif
