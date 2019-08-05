/*
 RoboCAT Controller Example
 https://www.thingiverse.com/thing:3742772
 Serjey Kolobov (ittonru)
 August 2, 2019.
test_test
*/
#include <Servo.h>

Servo s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13;  // create servo object to control a servo

long rN0; long rN1; long rN2; long rN3; long rN4; long rNt; long rNt1;


void setup() {
 delay(1000);
   //шея
  s0.attach(0); s0.write(90);  
 // s1.attach(1); s1.write(90);
  delay(500);
  s2.attach(2); s2.write(90);
  delay(500); 
     
      //спина
       s7.attach(9); s7.write(120);
  delay(1000);
       s9.attach(16); s9.write(10); 
  delay(2000);
 
   s8.attach(10); s8.write(90);
  delay(2000);
  s7.write(90);
  delay(1000);
   s9.write(90);
  delay(200);
  
//шея 2 позвонок
  s1.attach(1); s1.write(90);
  delay(500);


  //перед
  s3.attach(3); s3.write(120);
  s4.attach(6); s4.write(60);
  s5.attach(7); s5.write(60);
  s6.attach(8); s6.write(140);
  delay(1000); 

  //зад 

  s11.attach(22); s11.write(40);
    s13.attach(25); s13.write(130);
//delay(1000);
      s10.attach(17); s10.write(120);
  s12.attach(24);  s12.write(55);
 delay(1000); 
    //спина для выравнивания тела
   s8.write(70); delay(300); s8.write(110); delay(300); s8.write(90);
  delay(1000);
  s7.write(110);
  delay(100);
  s9.write(110);
  delay(200);
   s7.write(90);
  delay(100);
  s9.write(90);
  delay(200);
 s7.write(110);
  delay(100);
  s9.write(110);
  delay(100);
   s7.write(95);
  delay(100);
  s9.write(85);
  delay(200);
}

void loop() {
  
  
            rN0 = random(60, 150);
            rN1 = random(40, 80);
            rN2 = random(70, 110);
            rN3 = random(60, 120);
            rN4 = random(135, 145);
            
            rNt = random(5000, 30000);
            rNt1 = random(5000, 30000);
                          

  delay(rNt); 
 
s0.write(rN0); s1.write(rN1); s2.write(rN2);
 delay(rNt1);

}

