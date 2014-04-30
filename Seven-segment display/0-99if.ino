float count, test, help = 0;
int a, help, b = 0;
int ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11}; //4,5,6,7 display esquerda, 8,9,10,11 display direita
const int REFRESH_TIME = 1000;

void setup(){
	for (i=4; i<=9; i++){pinMode(ledPin[i], OUTPUT)}
}

void loop(){
	count = 1.3; //RECEBE VOLTAGEM
	test = int(count); //recebeu 1
	
	if (test-8>=0){
		digitalWrite(ledPin[0], HIGH);
		test -= 8;
	} else {
		digitalWrite(ledPin[0], LOW);
	}
	if (test-4>=0){
		digitalWrite(ledPin[1], HIGH);
		test -= 4;
	} else {
		digitalWrite(ledPin[1], LOW);
	}
	if (test-2>=0){
		digitalWrite(ledPin[2], HIGH);
		test -= 2;
	} else {
		digitalWrite(ledPin[2], LOW);
	}
	if (test-1>=0){
		digitalWrite(ledPin[3], HIGH);
	} else {
		digitalWrite(ledPin[3], LOW);
	}
	
	test = count;  //1.3
	help = int(test); //recebeu 1
	
	for(i=1; i<=10; i++){
		test += 0.1; //até test for igual a 2
		a = int(test); //2
		b += 1;
		
		if (a != help){ //2 != 1
			test = 10 - b;
		}	
	}
	
	if (test-8>=0){
		digitalWrite(ledPin[4], HIGH);
		test -= 8;
	} else {
		digitalWrite(ledPin[4], LOW);
	}
	if (test-4>=0){
		digitalWrite(ledPin[5], HIGH);
		test -= 4;
	} else {
		digitalWrite(ledPin[5], LOW);
	}
	if (test-2>=0){
		digitalWrite(ledPin[6], HIGH);
		test -= 2;
	} else {
		digitalWrite(ledPin[6], LOW);
	}
	if (test-1>=0){
		digitalWrite(ledPin[7], HIGH);
	} else {
		digitalWrite(ledPin[7], LOW);
	}
	
	delay(REFRESH_TIME);
	count += 0.1;
	
	if (count >= 9.9){
		count = 0;
	}
}