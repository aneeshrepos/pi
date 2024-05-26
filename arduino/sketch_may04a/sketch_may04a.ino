const int lm1=5;
const int lm2=4;
const int rm1=0;
const int rm2=2;
const int trigPin=12;
const int echoPin=13;
long duration,distance;
int dis;

int dist(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=((duration*0.034)/2);
  return (distance);
}

void forward(){
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(0,LOW);
  digitalWrite(2,HIGH);
}

void left(){
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(0,LOW);
  digitalWrite(2,HIGH);
}

void right(){
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(2,HIGH);
}

void stopp(){
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(2,HIGH);
}

void setup(){
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(16,INPUT);
  pinMode(14,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,OUTPUT);
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
  if ((dis < 10))
  stopp();
}


