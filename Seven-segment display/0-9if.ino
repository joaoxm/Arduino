int count = 0;
int test = 0;
int ledPin[] = {4, 5, 6, 7};
const int REFRESH_TIME = 1000;

void setup(){
	for (i=0; i<=3; i++){pinMode(ledPin[i], OUTPUT)}
}

void loop(){
	test = count;
	if (test-8>=0){
		digitalWrite(pin[0], HIGH);
		test -= 8;
	} else {
		digitalWrite(pin[0], LOW);
	}
	if (test-4>=0){
		digitalWrite(pin[1], HIGH);
		test -= 4;
	} else {
		digitalWrite(pin[1], LOW);
	}
	if (test-2>=0){
		digitalWrite(pin[2], HIGH);
		test -= 2;
	} else {
		digitalWrite(pin[2], LOW);
	}
	if (test-1>=0){
		digitalWrite(pin[3], HIGH);
	} else {
		digitalWrite(pin[3], LOW);
	}
	delay(REFRESH_TIME);
	count += 1;
	
	if (count == 10){
		count = 0;
	}
}