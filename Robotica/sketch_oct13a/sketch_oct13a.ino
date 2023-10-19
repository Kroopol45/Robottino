//mot1
const int EN1 = 2;    //velo
const int IN1m1 = 50;
const int IN2m1 = 48;

//mot2
const int EN2 = 3;    //velo
const int IN1m2 = 45;  //in4
const int IN2m2 = 47;  //in3
//mot3
const int EN3 = 4;    //velo
const int IN1m3 = 49;   //in1
const int IN2m3 = 51;  //in2

void mot1(int senso, int potenza){
  if (senso == 1){
    digitalWrite(IN1m1, HIGH);     //mot 2 orario
    digitalWrite(IN2m1, LOW);
  }
  else{
    digitalWrite(IN1m1, LOW);    //mot 3 orario
    digitalWrite(IN2m1, HIGH);
  }
  digitalWrite(EN1, LOW);
}
void mot2(int senso, int potenza){
  if (senso == 1){
    digitalWrite(IN1m2, HIGH);     //mot 2 orario
    digitalWrite(IN2m2, LOW);

  }
  else{
    digitalWrite(IN1m2, LOW);    //mot 3 orario
    digitalWrite(IN2m2, HIGH);
  }
  digitalWrite(EN2, LOW);
}
void mot3(int senso, int potenza){
  if (senso == 1){
    digitalWrite(IN1m3, HIGH);     //mot 2 orario
    digitalWrite(IN2m3, LOW);

  }
  else{
    digitalWrite(IN1m3, LOW);    //mot 3 orario
    digitalWrite(IN2m3, HIGH);
  }
  digitalWrite(EN3, LOW);
}


void avanti(int vel) {
  mot2(1,vel);     
  mot3(0,vel);
}
void indietro(int vel) {
  mot2(1,vel);
  mot3(0,vel);
}
void girasinistra(int vel) {
  mot1(1,vel);      
  mot2(1,vel);
  mot3(1,vel);
}
void girasdestra(int vel) {
  mot1(1,vel);      
  mot2(1,vel);
  mot3(1,vel);
}

void setup() {
  //settare come output tutti i pin

  //mot1
  pinMode(EN1, OUTPUT);
  pinMode(IN1m1, OUTPUT);
  pinMode(IN2m1, OUTPUT);
  //mot2
  pinMode(EN2, OUTPUT);
  pinMode(IN1m2, OUTPUT);
  pinMode(IN2m2, OUTPUT);
  //mot3
  pinMode(EN3, OUTPUT);
  pinMode(IN1m3, OUTPUT);
  pinMode(IN2m3, OUTPUT);
}

void loop() {
  girasinistra(250);
  
}
