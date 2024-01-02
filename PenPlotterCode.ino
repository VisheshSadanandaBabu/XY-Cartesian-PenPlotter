int enB = 5;
int in3 = 6;
int in4 = 7;
int enA = 10;
int in1 = 8;
int in2 = 9;
/*int msX = 3;
int msY = 4;
*/
void setup() {
pinMode(enA, OUTPUT);
pinMode(enB, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
}
//Home program
/*void home1() {
if(digitalRead(msX) == HIGH
)
{ 
 digitalWrite(in1
, HIGH);
 digitalWrite(in2
, LOW);
 analogWrite(enA
, 200);
}
else
{
 digitalWrite(in1
, LOW);
 digitalWrite(in2
, LOW);
}
if( digitalRead(msY) == HIGH
)
{ 
 digitalWrite(in3
, HIGH);
 digitalWrite(in4
, LOW);
 analogWrite(enB
, 200);
}
else
{
 digitalWrite(in3
, LOW);
 digitalWrite(in4
, LOW);
}
if( digitalRead(msY) == LOW
)
{ 
 digitalWrite
(in3
, LOW);
 digitalWrite(in4
, LOW);
}*/
void loop(){ 

 digitalWrite(in3, HIGH); //UP SIDE
 digitalWrite(in4, LOW);
 analogWrite(enB, 200);
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 analogWrite(enA, 200);
 delay(2000);

 digitalWrite(in3, HIGH); // RIGHT SIDE
 digitalWrite(in4, LOW);
 analogWrite(enB, 200);
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 analogWrite(enA, 205);
 delay(2500);

 digitalWrite(in3, LOW); // DOWN SIDE
 digitalWrite(in4, HIGH);
 analogWrite(enB, 200);
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 analogWrite(enA, 200);
 delay(2000);
 
 digitalWrite(in3, LOW); // LEFT SIDE
 digitalWrite(in4, HIGH);
 analogWrite(enB, 200);
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 analogWrite(enA, 200);
 delay(2500);

 

 digitalWrite(in3, HIGH); //UP-LEFT SIDE(/)
 digitalWrite(in4, LOW);
 analogWrite(enB, 250);
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 analogWrite(enA, 00);
 delay(3500);

 digitalWrite(in3, LOW); // UP-RIGHT SIDE(\)
 digitalWrite(in4, LOW);
 analogWrite(enB, 00);
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 analogWrite(enA, 200);
 delay(3000);

 
 digitalWrite(in3, LOW); // DOWN-LEFT SIDE(/)
 digitalWrite(in4, HIGH);
 analogWrite(enB, 250);
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 analogWrite(enA, 00);
 delay(4500);


 digitalWrite(in3, LOW); // DOWN-RIGHT SIDE(\)
 digitalWrite(in4, LOW);
 analogWrite(enB, 00);
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 analogWrite(enA, 250);
 delay(5000);

}
