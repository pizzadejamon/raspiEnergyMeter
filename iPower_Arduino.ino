

const int analogPin = A0; //pin for reading IR phototransistor
const int irOutPin = D2;  //pin IR LED is connected on

float reading = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.begin(9600);
  pinMode(irOutPin, OUTPUT);
  digitalWrite(irOutPin, HIGH); //always shines IR light (white led)
}


void loop() {
  reading = analogRead(analogPin);    //read value
  Serial.println(reading);            //print (for plotting)
  
  delay(50); //remove this?
}
