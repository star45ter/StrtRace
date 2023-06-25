
// defines pins numbers
const int trigPin = 2;
const int echoPin = 3;
// defines variables
long duration;
int distance;
int distance_car = 0;
bool setupcar=false;
bool race = false;
long int t1;
long int t2;
String secondstring ;
String millisstring ;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(4, OUTPUT); // Sets the echoPin as an Input
  pinMode(5, OUTPUT); // Sets the echoPin as an Input
  pinMode(6, OUTPUT); // Sets the echoPin as an Input
  pinMode(11, INPUT);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  Serial.begin(250000); // Starts the serial communication
    // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
   distance_car=distance;
      digitalWrite(5, HIGH);
      digitalWrite(4, LOW);
}
void loop() {
  
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor

  delay(10);
   
  

  if(abs(distance_car-distance)>50)
  {
    if(!race)
    {
    race=true;
    t1 = millis();
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(10000);
    }
    else
    {
    race=false;
    t2 = millis();
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    long int currentmillis = t2-t1;
    unsigned long seconds = currentmillis / 1000;
    unsigned long minutes = seconds / 60;
    unsigned long hours = minutes / 60;
    unsigned long days = hours / 24;
    currentmillis %= 1000;
    seconds %= 60;
    minutes %= 60;
    hours %= 24;

    secondstring = String(seconds);
    millisstring =String(currentmillis);

    if(seconds<10)
    {
      secondstring = "0"+secondstring;
    }
    if(millis<100)
    {
      millisstring = "0"+millisstring;
    }
    Serial.println(String(minutes)+":"+secondstring+":"+millisstring);


    delay(10000);
    }
  }





 
}