//Code Written By RAJDEEP BARUAH

int sensorPin=A0;
int sensorValue=7;
int led_pin=7;
int i=0;

void setup()
{
  //put your setup code here,to run once;
  Serial.begin(9600);
}

void loop()
{
  //put your main code here, to run repeatedly:
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(100);
  if(sensorValue>40)
    analogWrite(led_pin,HIGH);
  else
    analogWrite(led_pin,LOW);
}
