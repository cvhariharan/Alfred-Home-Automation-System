const int light1 = 12;
const int light2 = 8;
const int fan1 = 4;
const int fan2 = 2;
String in;
void setup() {
 pinMode(light1, OUTPUT);
 pinMode(light2, OUTPUT);
 pinMode(fan1, OUTPUT);
 pinMode(fan2, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  while(Serial.available()==0);
  Serial.flush();
  in = Serial.readString();
  Serial.println(in);
  if(in.indexOf("Light 1 on")>0)
  {
    Serial.println("Light 1 on");
  }
  if(in.indexOf("Light 2 on")>0)
  {
    Serial.println("Light 2 on");
  }
  if(in.indexOf("Fan 1 on")>0)
  {
    Serial.println("Fan 1 on");
  }
  if(in.indexOf("Fan 2 on")>0)
  {
    Serial.println("Fan 2 on");
  }
  
}
