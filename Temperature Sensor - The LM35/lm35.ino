const int REFRESH_TIME = 2000;
const float CELSIUS_BASE = 0.4887585532746823069403714565;
float valor = 0;
float celsius = 0;
int ledPin[] = {2, 3, 4};

void setup(){ 
  Serial.begin(9600);
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
}

void loop(){
  valor = analogRead(A2);
  celsius = valor * CELSIUS_BASE;
  Serial.print("Temperatura: ");
  Serial.println(celsius);
  if (celsius < 21){ 
    digitalWrite(ledPin[0], LOW);
    digitalWrite(ledPin[1], LOW);
    digitalWrite(ledPin[2], HIGH);
  } else if (celsius > 23){
    digitalWrite(ledPin[0], HIGH);
    digitalWrite(ledPin[1], LOW);
    digitalWrite(ledPin[2], LOW);    
  } else {
   digitalWrite(ledPin[0], LOW);
   digitalWrite(ledPin[1], HIGH);
   digitalWrite(ledPin[2], LOW);     
  }
  delay(REFRESH_TIME); 
  
}
