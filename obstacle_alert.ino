const int trigPin = 9;
const int echoPin = 8;
const int buzzerPin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Trigger sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Calculate distance
  long duration = pulseIn(echoPin, HIGH);
  long cm = duration * 0.034 / 2;

  Serial.print(cm);
  Serial.println(" cm");

  // Buzzer on if object is within 400cm
  if (cm < 400 && cm > 2) {
    tone(buzzerPin, 1000);
    delay(200);
    noTone(buzzerPin);
    delay(200);
  } else {
    noTone(buzzerPin);
  }
  delay(200);
}
