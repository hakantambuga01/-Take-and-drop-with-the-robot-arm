#include <Servo.h>
Servo donme,sag,sol,gripper,start;

void setup() 
{
  donme.attach(12);
  sol.attach(11);
  sag.attach(10);
  gripper.attach(9);
  start.attach(8);
  
  donme.write(100);  delay(1000);
  sol.write(150);    delay(1000);
  sag.write(50);     delay(1000);
  gripper.write(30); delay(1000);
  //sol.write(179);    delay(1000);
 // sag.write(180);
//  delay(1000);
}

void loop()
{
  misketAl();
  delay(1000);
  misketBirak();
  delay(3000);
  }

void misketAl()
{
  start.write(90);
  for(int i=100; i<=138; i++) {donme.write(i); delay(15);   } delay(1000);
  for(int b=50; b<=72; b++)   { sag.write(b); delay(15);}     delay(1000);
  for(int c=150; c>=75; c--) { sol.write(c); delay(15);}     delay(1000);
  for(int d=30; d>=0; d--)     {gripper.write(d); delay(15); }
}

void misketBirak()
{
  for(int e=75; e<=155; e++) {sol.write(e);   delay(15); }  delay(1000);
  for(int f=72; f>=30; f--)  {sag.write(f);   delay(15); }  delay(1000);
  for(int g=138; g<=177; g++)  {donme.write(g); delay(15); }  delay(1000); 
  for(int k=30; k<=72; k++)  {sag.write(k);   delay(10); }  delay(1000);
  start.write(170);  delay(1000);
  for(int h=0; h<30; h++)   {gripper.write(h); delay(15); } 
  delay(2000);
  start.write(90);
 
}

