#include <SoftwareSerial.h>

SoftwareSerial mySerial(11,10); // RX, TX
 int task=0;

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
  mySerial.println("I'm Arduino\r\n");
}

void loop() { // run over and over
 if (mySerial.available()) {
 task=(int)mySerial.read();



switch(task){
case '1' :  Serial.write("en traine de faire task 1...\n");       delay(5000);       mySerial.write("1");   break;
case '2' :  Serial.write("en traine de faire task 2...\n");       delay(4000);       mySerial.write("2"); break;
case '3' :  Serial.write("en traine de faire task 3...\n");       delay(4000);       mySerial.write("3"); break;
case '4' :  Serial.write("en traine de faire task 4...\n");       delay(4000);       mySerial.write("4"); break;
default: break;  

}

}
 /*if (Serial.available()) {
    mySerial.write(Serial.read());
  }*/ 
}
