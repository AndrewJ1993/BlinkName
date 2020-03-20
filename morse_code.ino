// ------------
// Blink an LED
// ------------


int led2 = D7;


void setup() {

	// We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
	// (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

	// It's important you do this here, inside the setup() function rather than outside it or in the loop function.

	pinMode(led2, OUTPUT);

}


void loop() {
    // A
	digitalWrite(led2, HIGH);
	delay(300);
	digitalWrite(led2, LOW);
	delay(300);
	digitalWrite(led2, HIGH);
	delay(900);
	digitalWrite(led2, LOW);
	delay(300);
	
	// N
	digitalWrite(led2, HIGH);
	delay(900);
	digitalWrite(led2, LOW);
	delay(300);
	digitalWrite(led2, HIGH);
	delay(300);
	digitalWrite(led2, LOW);
	delay(300);

    // D
    digitalWrite(led2, HIGH);
	delay(900);
	digitalWrite(led2, LOW);
	delay(300);
	digitalWrite(led2, HIGH);
	delay(300);
	digitalWrite(led2, LOW);
	delay(300);
	digitalWrite(led2, HIGH);
	delay(300);
	digitalWrite(led2, LOW);
	delay(300);
	
	// R
	digitalWrite(led2, HIGH);
	delay(300);
	digitalWrite(led2, LOW);
	delay(300);
	digitalWrite(led2, HIGH);
	delay(900);
	digitalWrite(led2, LOW);
	delay(300);
	digitalWrite(led2, HIGH);
	delay(300);
	digitalWrite(led2, LOW);
	delay(300);
	
	// E
	digitalWrite(led2, HIGH);
	delay(300);
	digitalWrite(led2, LOW);
	delay(300);
	
	// W
	digitalWrite(led2, HIGH);
	delay(300);
	digitalWrite(led2, LOW);
	delay(300);
	digitalWrite(led2, HIGH);
	delay(900);
	digitalWrite(led2, LOW);
	delay(300);
	digitalWrite(led2, HIGH);
	delay(900);
	digitalWrite(led2, LOW);
	delay(300);
	
	// End
	digitalWrite(led2, LOW);
	delay(1200);

	// And repeat!
}

