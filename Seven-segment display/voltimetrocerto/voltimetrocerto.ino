int displaySide[] = {2,3,4,5,6,7,8,9};
int ledPin[] = {10,11,12};
int test;
int sensorValue;
int sensorPin = A0;
char count[5];
const int REFRESH_TIME = 2000;
float floo;

void setup(){
  pinMode(displaySide[0], OUTPUT);
  pinMode(displaySide[1], OUTPUT);
  pinMode(displaySide[2], OUTPUT);
  pinMode(displaySide[3], OUTPUT);
  pinMode(displaySide[4], OUTPUT);
  pinMode(displaySide[5], OUTPUT);
  pinMode(displaySide[6], OUTPUT);
  pinMode(displaySide[7], OUTPUT);
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  Serial.begin(9600);
}

void loop(){
  sensorValue = analogRead(sensorPin); //LE O VALOR 0-1023 DA PILHA
  
  floo = (5*sensorValue);  //CONVERTE PARA VOLTS
  floo = floo/1023;
  
  dtostrf(floo,4,2,count); //CONVERTE DE FLOAT PARA CHAR
  
  Serial.print("Count = "); //MOSTRA VOLTAGEM NA TELA
  Serial.print(count[0]);
  Serial.print(count[1]);
  Serial.println(count[2]);
  
  test = count[0] - '0'; //CHAR PARA INTEIRO
  convertBinary(test, 2, 3, 4, 5); //2=>8, 3=>4, 4=>2, 5=>1

  test = count[2] - '0';
  convertBinary(test, 8, 7, 6, 9); //8=>8, 7=>4, 6=>2, 9=>1

  ledShow(floo, 2.5, 7.0); //2.5- vermelho, 2.5-7.0 amarelo, 7.0+ verde

  delay(REFRESH_TIME);
  /*floo += 0.1;
  if (floo >= 10){ floo = 0;}*/
}

void convertBinary(int test, int bit1, int bit2, int bit3, int bit4){
  if (test-8>=0){
    digitalWrite(bit1, HIGH);
    test -= 8;
  } 
  else {
    digitalWrite(bit1, LOW);
  }
  if (test-4>=0){
    digitalWrite(bit2, HIGH);
    test -= 4;
  } 
  else {
    digitalWrite(bit2, LOW);
  }
  if (test-2>=0){
    digitalWrite(bit3, HIGH);
    test -= 2;
  } 
  else {
    digitalWrite(bit3, LOW);
  }
  if (test-1>=0){
    digitalWrite(bit4, HIGH);
  } 
  else {
    digitalWrite(bit4, LOW);
  } 
}

void ledShow(float test, float perc1, float perc2){
  if (test <= perc1){ 
    digitalWrite(ledPin[0], LOW);
    digitalWrite(ledPin[1], LOW);
    digitalWrite(ledPin[2], HIGH);
  } 
  else if ((test > perc1) && (test <= perc2)){
    digitalWrite(ledPin[0], LOW);
    digitalWrite(ledPin[1], HIGH);
    digitalWrite(ledPin[2], LOW);    
  } 
  else {
    digitalWrite(ledPin[0], HIGH);
    digitalWrite(ledPin[1], LOW);
    digitalWrite(ledPin[2], LOW);     
  } 
}

