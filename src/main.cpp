#include <Arduino.h>
void gui(uint8_t data)
{
  digitalWrite(0, LOW);
  //     data, clock ,trai sang phai, bit can truyen
  shiftOut(11, 13, LSBFIRST, data);
  digitalWrite(0, HIGH);
}
void setup()
{
  pinMode(13, OUTPUT); // clock
  pinMode(11, OUTPUT); // data serial (MOSI) (truyen tin hieu di)
  pinMode(0, OUTPUT);  // latch (chot tin hieu) (ss)(slave selector)
}
void loop()
{
  // digitalWrite(0, LOW);
  // //     data, clock ,trai sang phai, bit can truyen
  // shiftOut(11, 13, LSBFIRST, 0b11111111);
  // digitalWrite(0, HIGH);
  // delay(300);
  // digitalWrite(0, LOW);
  // //     data, clock ,trai sang phai, bit can truyen
  // shiftOut(11, 13, LSBFIRST, 0b00000000);
  // digitalWrite(0, HIGH);
  gui(0b11111111);
  delay(300);
  gui(0b00000000);
  delay(300);
}