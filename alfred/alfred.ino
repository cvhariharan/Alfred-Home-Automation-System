const int light1 = 13;
const int light2 = 12;
const int fan1 = 8;
const int fan2 = 4;
String in;
void setup()
{
pinMode(light1, OUTPUT);
pinMode(light2, OUTPUT);
pinMode(fan1, OUTPUT);
pinMode(fan2, OUTPUT);
Serial.begin(9600);
}

void loop()
{
while(Serial.available()==0);
in = Serial.readString();
if(in.indexOf("Light 1 on") >= 0)
{
Serial.println("Switch light 1 on.");
digitalWrite(light1, HIGH);
}
else if(in.indexOf("Light 2 on") >= 0)
{
Serial.println("Switch light 2 on.");
digitalWrite(light2, HIGH);
}
else if(in.indexOf("Fan 1 on") >= 0)
{
Serial.println("Switch Fan 1 on.");
digitalWrite(fan1, HIGH);
}
else if(in.indexOf("Fan 2 on") >= 0)
{
Serial.println("Switch fan 2 on.");
digitalWrite(fan2, HIGH);
}
if(in.indexOf("Light 1 off") >= 0)
{
Serial.println("Switch light 1 off.");
digitalWrite(light1, LOW);
}
else if(in.indexOf("Light 2 off") >= 0)
{
Serial.println("Switch light 2 off.");
digitalWrite(light2, LOW);
}
else if(in.indexOf("Fan 1 off") >= 0)
{
Serial.println("Switch Fan 1 off.");
digitalWrite(fan1, LOW);
}
else if(in.indexOf("Fan 2 off") >= 0)
{
Serial.println("Switch fan 2 off.");
digitalWrite(fan2, LOW);
}
}
