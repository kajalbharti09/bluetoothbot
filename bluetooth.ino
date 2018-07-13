int leftmotor1 = 13;
int leftmotor2 = 12;
int rightmotor1 = 11;
int rightmotor2 = 10;

void forward(){
  digitalWrite(leftmotor1,HIGH);
  digitalWrite(leftmotor2,LOW);
  digitalWrite(rightmotor1,HIGH);
  digitalWrite(rightmotor2,LOW);
}
void backward(){
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,HIGH);
  digitalWrite(rightmotor1,LOW);
  digitalWrite(rightmotor2,HIGH);
}
void left(){
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,LOW);
  digitalWrite(rightmotor1,HIGH);
  digitalWrite(rightmotor2,LOW);
}
void right(){
  digitalWrite(leftmotor1,HIGH);
  digitalWrite(leftmotor2,LOW);
  digitalWrite(rightmotor1,LOW);
  digitalWrite(rightmotor2,LOW);
}
void stp(){
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,LOW);
  digitalWrite(rightmotor1,LOW);
  digitalWrite(rightmotor2,LOW);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(leftmotor1,OUTPUT);
   pinMode(leftmotor2,OUTPUT);
   pinMode(rightmotor1,OUTPUT);
   pinMode(rightmotor2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()){
  char data = Serial.read();
  if(data =='1'){
    Serial.println('forward');//forward
    forward();
  }
   else if(data =='2'){
    Serial.println('left');//left
    left();
  } else if(data =='3'){
    Serial.println('backward');//backward
    backward();
  } else if(data =='4'){
    Serial.println('right');//right
    right();
  } else  {
    Serial.println('stp');//stop
    stp();
  }
}
}
//int leftmotor1 = 13;
//int leftmotor2 = 12;
//int rightmotor1 = 11;
//int rightmotor2 = 10;

void frward(){
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
void bckward(){
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
}
void lft(){
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
void rght(){
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
void sp(){
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(13,OUTPUT);
   pinMode(12,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()){
  char data = Serial.read();
  if(data =='1'){
    Serial.println('forward');//forward
    frward();
  }
   else if(data =='2'){
    Serial.println('left');//left
    lft();
  } else if(data =='3'){
    Serial.println('backward');//backward
    bckward();
  } else if(data =='4'){
    Serial.println('right');//right
    rght();
  } else  {
    Serial.println('stp');//stop
    sp();
  }
}
}

