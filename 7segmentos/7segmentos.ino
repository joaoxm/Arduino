const int REFRESH_TIME = 100;
int ledPin[] = {4, 5, 6, 7};

void setup(){ 
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
}

void loop(){
  
  delay(REFRESH_TIME);
  digitalWrite(ledPin[0], LOW);
  digitalWrite(ledPin[1], LOW);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);  
  delay(REFRESH_TIME);
 
  digitalWrite(ledPin[0], HIGH);
  digitalWrite(ledPin[1], LOW);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);  
  delay(REFRESH_TIME);
 
  digitalWrite(ledPin[0], LOW);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);  
  delay(REFRESH_TIME);
  
  digitalWrite(ledPin[0], HIGH);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);  
  delay(REFRESH_TIME);
  
  digitalWrite(ledPin[0], LOW);
  digitalWrite(ledPin[1], LOW);
  digitalWrite(ledPin[2], HIGH);
  digitalWrite(ledPin[3], LOW);  
  delay(REFRESH_TIME);
  
  digitalWrite(ledPin[0], HIGH);
  digitalWrite(ledPin[1], LOW);
  digitalWrite(ledPin[2], HIGH);
  digitalWrite(ledPin[3], LOW);  
  delay(REFRESH_TIME);
  
  digitalWrite(ledPin[0], LOW);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], HIGH);
  digitalWrite(ledPin[3], LOW);  
  delay(REFRESH_TIME);
  
  digitalWrite(ledPin[0], HIGH);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], HIGH);
  digitalWrite(ledPin[3], LOW);  
  delay(REFRESH_TIME);
  
  digitalWrite(ledPin[0], LOW);
  digitalWrite(ledPin[1], LOW);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], HIGH);  
  delay(REFRESH_TIME);
 
  digitalWrite(ledPin[0], HIGH);
  digitalWrite(ledPin[1], LOW);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], HIGH);  
  delay(REFRESH_TIME);
}
