int count = 0;
int test = 0;
int ledPin[] = {4, 5, 6, 7};
const int REFRESH_TIME = 1000;

void setup(){
	for (i=4; i<=7; i++){pinMode(ledPin[i], OUTPUT)}
}

void loop(){
	test = count;
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
	delay(REFRESH_TIME);
	count += 1;
	
	if (count == 10){
		count = 0;
	}
}