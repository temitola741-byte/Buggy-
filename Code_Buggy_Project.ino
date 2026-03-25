//Pin definitions
const int trigPin = 12; // Ultrasonic trigger
const int echoPin = 13; // Ultrasonic echo

const int IN1 = 6; // Motor A spin direction
const int IN2 = 5;
const int IN3 = 4; // Motor B spin direction
const int IN4 = 3; 

const int ENA = 10; // Speed control Motor A
const int ENB = 9; // Speed control Motor B

const int servocontr = 11; // Servo motor control

void setup() {
  // Ultrasonic sensor pins
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin, INPUT);

  //Motor driver pins
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  //Servo pin 
  pinMode(servocontr, OUTPUT);

  analogWrite(ENA, 150); //Set left motor speed to 200
  analogWrite(ENB, 150); // Set right motor speed to 200


};


void loop() {

}
//moving right:
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH );
analogwrite()

//moving left:
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);

//moving straight:
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW );




