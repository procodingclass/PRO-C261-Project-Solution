/* ESP32 Servo Sweep */
const int servoPin = 13;  /* GPIO16 */

int dutyCycle = 0;

/* Setting PWM properties */
const int PWMFreq = 50;
const int PWMChannel = 0;
const int PWMResolution = 8;
//const int MAX_DUTY_CYCLE = (int)(pow(2, PWMResolution) - 1);

void setup()
{  
  Serial.begin(115200);
  ledcSetup(PWMChannel, PWMFreq, PWMResolution);
  /* Attach the LED PWM Channel to the GPIO Pin */
  ledcAttachPin(servoPin, PWMChannel);
  ledcWrite(PWMChannel, dutyCycle);
}
void loop()
{
  for(dutyCycle = 5; dutyCycle <= 32; dutyCycle++)
  {
    ledcWrite(PWMChannel, dutyCycle);
    delay(70);    
  }
  for(dutyCycle = 32; dutyCycle >= 5; dutyCycle--)
  {
    ledcWrite(PWMChannel, dutyCycle);
    delay(70);    
  }
}



























// const int Servo_control_pin = 13;

// void setup() {
//   Serial.begin(9600);
//   pinMode(Servo_control_pin, OUTPUT);
// }


// void loop() {
//   for (int i = 0; i < 50; i++) {
//     digitalWrite(Servo_control_pin, HIGH);
//     delayMicroseconds(480);
//     digitalWrite(Servo_control_pin, LOW);
//     delayMicroseconds(19520);
//   }//0º
//   delay(3000);
//   for (int i = 0; i < 50; i++) {
//     digitalWrite(Servo_control_pin, HIGH);
//     delayMicroseconds(1230);
//     digitalWrite(Servo_control_pin, LOW);
//     delayMicroseconds(18780);
//   }//90º
//   delay(3000);
//   for (int i = 0; i < 50; i++) {
//     digitalWrite(Servo_control_pin, HIGH);
//     delayMicroseconds(2091);
//     digitalWrite(Servo_control_pin, LOW);
//     delayMicroseconds(17909);
//   }//180º
//   delay(3000);
// for (int i = 0; i < 50; i++) {
//     digitalWrite(Servo_control_pin, HIGH);
//     delayMicroseconds(1693);
//     digitalWrite(Servo_control_pin, LOW);
//     delayMicroseconds(18301);
//   }//135º
//   delay(3000);
// }