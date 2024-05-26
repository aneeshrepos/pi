int lm1 = 5;
int lm2 = 4;
int rm1 = 0;
int rm2 = 2;

void forward(){
  digitalWrite(lm1,HIGH);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,HIGH);
  digitalWrite(rm2,LOW);
}
void reverse(){
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,HIGH);
}
void right(){
  digitalWrite(lm1,HIGH);
  digitalWrite(lm1,LOW);
  digitalWrite(lm1,LOW);
  digitalWrite(lm1,HIGH);
}
void left(){
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,HIGH);
  digitalWrite(rm2,LOW);
}
void stopp(){
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,LOW);
}
void setup(){
  Serial.begin(9600);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
}
void loop(){
  while(!Serial.available());
  char c = Serial.read();
  if (c=='F')
  forward();
  else if (c=='B')
  reverse();
  else if (c=='L')
  left();
  else if (c=='R')
  right();
  else
  stopp();
}


