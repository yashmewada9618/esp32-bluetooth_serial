#include <Wire.h>

#include "SparkFun_AS7265X.h"
AS7265X sensor;

#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
//Click here to get the library: http://librarymanager/All#SparkFun_AS7265X

int arr[20]; char c;
void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32test_Azim");
  Wire.setClock(400000);
  //  if (sensor.begin() == false)
  //  {
  //    //    Serial.println("Sensor does not appear to be connected. Please check wiring. Freezing...");
  //    while (1);
  //  }

  //Once the sensor is started we can increase the I2C speed

  //  sensor.disableIndicato/r();
  // Sensor();
  int A, B, C, D, E, F, G, H, I, J, K, L, R, S, T, U, V, W;
  //  Serial.println("A,B,C,D,E,F,G,H,I,J,K,L,R,S,T,U,V,W");
}

void loop() {
  //  byte A, B, C, D, E, F, G,/ H, I, J, K, L, R, S, T, U, V, W;
  if (SerialBT.available()) {
    c = SerialBT.read();
    Serial.println(c);
    if (c == '0')
    {
      //      sensor.takeMeasurementsW/ithBulb(); //This is a hard wait while all 18 channels are measured
      arr[0] = 1300;
      arr[1] = 625;
      arr[2] = 785;
      arr[3] = 840;
      arr[4] = 1623;
      arr[5] = 1350;
      arr[6] = 250;
      arr[7] = 340;
      arr[8] = 195;
      arr[9] = 110;
      arr[10] = 190;
      arr[11] = 75;
      arr[12] = 415;
      arr[13] = 65;
      arr[14] = 105;
      arr[15] = 35;
      arr[16] = 58;
      arr[17] = 455;


      Serial.print(arr[0]);
      Serial.print(",");
      Serial.print(arr[1]);
      Serial.print(",");
      Serial.print(arr[2]);
      Serial.print(",");
      Serial.print(arr[3]);
      Serial.print(",");
      Serial.print(arr[4]);
      Serial.print(",");
      Serial.print(arr[5]);
      Serial.print(","); Serial.print("    ");

      Serial.print(arr[6]);
      Serial.print(",");
      Serial.print(arr[7]);
      Serial.print(",");
      Serial.print(arr[8]);
      Serial.print(",");
      Serial.print(arr[9]);
      Serial.print(",");
      Serial.print(arr[10]);
      Serial.print(",");
      Serial.print(arr[11]);
      Serial.print(","); Serial.print("    ");

      Serial.print(arr[12]);
      Serial.print(",");
      Serial.print(arr[13]);
      Serial.print(",");
      Serial.print(arr[14]);
      Serial.print(",");
      Serial.print(arr[15]);
      Serial.print(",");
      Serial.print(arr[16]);
      Serial.print(",");
      Serial.print(arr[17]);
      Serial.print(","); Serial.print("    ");
      Serial.println();
      for (byte x = 0; x <= 5; x += 1) {
        Serial.println(x);
        for (int i = 0; i <= 17; i += 1) {
          //        SerialBT.print("\n");
         // SerialBT.print("  ");
          SerialBT.print(arr[i]);
          SerialBT.print(",");
          if (i == 17) {
            SerialBT.print("\n");
            //SerialBT.print(arr[17]);
            SerialBT.println();
            break;
          }
        }
        //        SerialBT.print("\t");
        //        SerialBT.println();
      }
    }
  }
}
