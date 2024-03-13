  int lightsensor = A0;		//assigning ldr pin
  int buttonPin = 2; //assign button pin
  int potent = A1; //assign potentiometer pin
  int buttonState = 0; //button starts as off
  
  void setup()
  {
    pinMode(lightsensor, INPUT);	//light sensor input
    pinMode(buttonPin, INPUT); // button input
    pinMode(potent, INPUT);	//light sensor input
    Serial.begin(9600); //setting up serial
  }

  void loop()
  {
    buttonState = digitalRead(buttonPin);
    int rawLight = analogRead(lightsensor);
    int potVal = analogRead(potent);
    Serial.print(rawLight);
   // Serial.print(buttonState); removed due to being unable to send multiple signals
   // Serial.print(potVal); removed due to being unable to send multiple signals
    Serial.println();
    delay (100);
  }

// tinkercad link: https://www.tinkercad.com/things/fFb1WYr2nm4-av-loop-kade-eisen