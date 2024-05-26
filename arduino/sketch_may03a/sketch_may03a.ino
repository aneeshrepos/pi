int lm1=5;
int lm2=4;
int rm1=0;
int rm2=2;

void forward(){
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,HIGH);
}

void left(){
  digitalWrite(lm1,HIGH);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,HIGH);
}

void right(){
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,HIGH);
  digitalWrite(rm2,HIGH);
}

void setup(){
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  pinMode(12,INPUT);
  pinMode(14,INPUT);
}

void loop(){
  int e=digitalRead(14);
  int t=digitalRead(12);

  if((e==0)&&(t==0))
  forward();
  if((e==1)&&(t==0))
  left();
  if((e==0)&&(t==1))
  right();
}


