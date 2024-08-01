// Define pin numbers for the traffic light and buzzer
const int redPin = 7;
const int yellowPin = 6;
const int greenPin = 5;
const int buzzerPin = 4;

// Define pin numbers for the ultrasonic sensor
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  // Initialize the pins
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  // Start with all lights off
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(buzzerPin, LOW);
  
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure the time it takes for the echo to return
  long duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance in centimeters
  int distance = duration * 0.034 / 2;
  
  // Print the distance for debugging
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Turn off all lights and buzzer
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(buzzerPin, LOW);
  
  // Check the distance and control the lights and buzzer accordingly
  if (distance >= 10) {
    digitalWrite(greenPin, HIGH);
    // No buzzer sound for green
  } else if (distance < 10 && distance >= 5) {
    digitalWrite(yellowPin, HIGH);
    tone(buzzerPin, 1000); // Play a tone for yellow
    delay(200); // Delay for sound
    noTone(buzzerPin); // Stop the tone
  } else {
    // If the distance is less than 2 cm, keep the red light on and keep buzzing
    digitalWrite(redPin, HIGH);
    tone(buzzerPin, 2000); // Play a higher tone for red
    delay(1000); // Delay for sound
    noTone(buzzerPin); // Stop the tone
  }
  
  // Wait before taking the next measurement
  delay(500);
}

//Smart Traffic Light Parking System
//By Bilal Ilyas Jhandir