// C++ code
//
int tempo = 150;
 

void setup(){

    pinMode(13, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(2, OUTPUT);
	
function piscar(porta){
	int porta;
	digitalWrite(porta,  HIGH);
	delay(tempo);
  	digitalWrite(porta,  LOW);
		
	}
  
}

void loop(){
    piscar(13);
    piscar(11);
    piscar(8);
    piscar(5);
    piscar(3);
    piscar(2);
  
  delay(tempo);
}
