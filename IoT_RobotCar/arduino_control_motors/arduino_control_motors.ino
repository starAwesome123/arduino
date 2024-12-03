
#define in1 2
#define in2 3
#define in3 4
#define in4 5

void stop();

void setup() {

  Serial.begin(9600);

  pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	
	// Turn off motors - Initial state
	stop();
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  //&& Serial.read() == ' '
  
    if (Serial.available() > 0) { // Check if data is available to read
    char receivedChar = Serial.read(); // Read the incoming byte
    Serial.println(receivedChar); 

    if (receivedChar=='0'){
      //Serial.println('0');
      right();
    }
    else if (receivedChar=='1'){
      //Serial.println('1');
      stop();
    }
    else if (receivedChar=='2'){
      //Serial.println('2');
      left();
    }
    else if (receivedChar=='3'){
      //Serial.println('3');
      forwards();
    }
    else if (receivedChar=='4'){
      //Serial.println('4');
      backwards();
   }
    
  }
    
}


void backwards() {

	digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	delay(20);
}

void forwards() {

	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, HIGH);
	digitalWrite(in4, LOW);
	delay(20);
}

void left() {

	digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
	delay(20);
}

void right() {

	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	delay(20);
}

void stop(){
  digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}
