#define BUZZERPIN 8
#define DELAY 100
#define FREQUENCY 800

const char letters[] = { 
  '-', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
String morse[] = {
  "01", "1000", "1010", "100", "0", "0010", "110", "0000", "00", "0111",
  "101", "0100", "11", "10", "111", "0110", "1101", "010", "000", "1",
  "001", "0001", "011", "1001", "1011", "1100"};

String txtMsg = "ALO GALERA";
int stringLength = txtMsg.length(); //QUANTOS CARACTERES TEM NA PALAVRA
char c;
String m;

void setup(){
  pinMode(BUZZERPIN, OUTPUT);
}

void loop(){
  for(int i=0; i<=stringLength; i++){
    c = txtMsg[i];
    m = morse[c-65]; //ardweenie.wordpress.com/2013/11/11/

    for(int a=0; a<=m.length(); a++){
      if(m.charAt(a) == '0'){
        tone(BUZZERPIN, FREQUENCY, DELAY);
        delay(DELAY);
        noTone(BUZZERPIN);
      }else if (m.charAt(a) == '1'){
        tone(BUZZERPIN, FREQUENCY, DELAY*3);
        delay(DELAY*3);
        noTone(BUZZERPIN);
      } else if (m.charAt(a) == ' '){
        delay(DELAY*4);//INTERVALO ENTRE PALAVRAS 7 - 3 das letras
      }
    }
    delay(DELAY*3);//INTERVALO ENTRE LETRAS
  }
}





