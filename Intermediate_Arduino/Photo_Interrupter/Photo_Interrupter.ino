
int led = 13;
int photoPin = 2;
volatile byte state = LOW;
int trigger = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(photoPin, INPUT_PULLUP);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2), on, CHANGE);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, state);


}

void on(){
	state = !state;
	trigger++;
	Serial.println(trigger);
}
