float count, test, help, valor;
int a, b, help;
int ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11}; //4,5,6,7 display esquerda, 8,9,10,11 display direita
const int REFRESH_TIME = 1000;

void setup(){
	for (i=4; i<=11; i++){pinMode(ledPin[i], OUTPUT)}
	Serial.begin(9600);
}

void loop(){
	count = 1.3; //RECEBE VOLTAGEM
	//count = analogRead(A1);
	test = int(count); //recebeu 1
	
	Serial.print("Voltagem: "); //MOSTRA VOLTAGEM NA TELA
	Serial.println(count);
	
	convertBinary(4, 5, 6, 7); //COLOCA NA FUNÇÃO E CONVERTE PARA BINÁRIO
	
	test = count;  //1.3
	help = int(test); //recebeu 1
	
	for(i=1; i<=10; i++){
		test += 0.1; //aumenta test até mudar sua parte inteira
		a = int(test); //checa para ver se a parte inteira mudou
		b += 1;
		
		if (help != a){ //compara a parte inteira antiga com a nova
			test = 10 - b; //test recebe o inverso do contador
			break;
		}	
	}
	
	convertBinary(8, 9, 10, 11);
	
	if (count < 0,5){ 
    digitalWrite(ledPin[0], LOW);
    digitalWrite(ledPin[1], LOW);
    digitalWrite(ledPin[2], HIGH);
  } else if ((count > 0,5) && (count < 1,0)){
    digitalWrite(ledPin[0], HIGH);
    digitalWrite(ledPin[1], LOW);
    digitalWrite(ledPin[2], LOW);    
  } else {
   digitalWrite(ledPin[0], LOW);
   digitalWrite(ledPin[1], HIGH);
   digitalWrite(ledPin[2], LOW);     
  }
	
	delay(REFRESH_TIME);
	count += 0.1;
	
	if (count >= 9.9){
		count = 0;
	}
}

void convertBinary(int a, int b, int c, int d){
	if (test-8>=0){
		digitalWrite(ledPin[a], HIGH);
		test -= 8;
	} else {
		digitalWrite(ledPin[a], LOW);
	}
	if (test-4>=0){
		digitalWrite(ledPin[b], HIGH);
		test -= 4;
	} else {
		digitalWrite(ledPin[b], LOW);
	}
	if (test-2>=0){
		digitalWrite(ledPin[c], HIGH);
		test -= 2;
	} else {
		digitalWrite(ledPin[c], LOW);
	}
	if (test-1>=0){
		digitalWrite(ledPin[d], HIGH);
	} else {
		digitalWrite(ledPin[d], LOW);
	}
}