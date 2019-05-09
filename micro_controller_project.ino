const int buttonPin = 4;     // the number of the pushbutton pin
const int ledPin =  13;     

int inc ;
int dec ;
int reset ;

void setup() {
  // put your setup code here, to run once:
 pinMode(13, OUTPUT);
 pinMode(4, INPUT);
 pinMode(5, INPUT);
 pinMode(6, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 inc = digitalRead(buttonPin);
//decc = digitalRead(5);
 //reset = digitalRead(6);
//digitalWrite(13,HIGH);
Serial.print  ("YES");
Serial.println  (inc  );

if (inc==1)
    {Serial.print  ("INC");
    digitalWrite(13,HIGH);
    }
    if (dec==1)
    {Serial.print  ("dec");
    digitalWrite(13,LOW);
    }

}
