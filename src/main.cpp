/*
 * @Author: test 3402502077@qq.com
 * @Date: 2024-05-12 22:28:44
 * @LastEditors: test 3402502077@qq.com
 * @LastEditTime: 2024-05-12 23:55:04
 * @FilePath: \chuankou2\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
#include <HardwareSerial.h>
// 更多LED可以继续添加

void setup()
{
  // 初始化串口通信
  Serial.begin(9600);
}

void loop()
{
  // 如果串口接收到数据
  if (Serial.available() > 0)
  {
    char input = Serial.read();

    if (input == '1')
    {
      digitalWrite(2,HIGH);
      Serial.println("LED1 亮");
    }else if(input == '2'){
      digitalWrite(3,HIGH);
      Serial.println("LED2 亮");
    }else if(input=='3'){
        digitalWrite(4,HIGH);
        Serial.println("LED3 亮");
    }else{
          Serial.println("Invalid command");
    }
  }
}
