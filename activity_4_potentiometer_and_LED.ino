#define LED_PIN 11
#define POTENTI_PIN A2


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  analogWrite(LED_PIN, 0);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(POTENTI_PIN));

  //calculate brightness
  //(potenti/1023) = (brighness/255)
  double divi = analogRead(POTENTI_PIN)/1023.0;
  Serial.println("division");
  Serial.println(divi);
  int brigntess = divi * 255;
  Serial.println("brigntess");
  Serial.println(brigntess);

  //set brigntess
  analogWrite(LED_PIN, brigntess);

  delay(50);//wait .05 seconds
}
