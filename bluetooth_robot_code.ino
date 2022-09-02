#define m1a 6
#define m1b 7
#define m2a 8
#define m2b 9
char data;
void setup() {
  // put your setup code here, to run once:
pinMode(m1a,OUTPUT);
pinMode(m1b,OUTPUT);
pinMode(m2a,OUTPUT);
pinMode(m2b,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(Serial.available()>0){
    data=Serial.read();
    Serial.println(data);
    
    if(data=='1'){
      digitalWrite(m1a,LOW);
      digitalWrite(m1b,HIGH);
      digitalWrite(m2a,LOW);
      digitalWrite(m2b,HIGH);
      }

     else if(data=='0'){
      digitalWrite(m1a,LOW);
      digitalWrite(m1b,LOW);
      digitalWrite(m2a,LOW);
      digitalWrite(m2b,LOW);
      
      }
    else if(data=='2'){
      digitalWrite(m1a,HIGH);
      digitalWrite(m1b,LOW);
      digitalWrite(m2a,HIGH);
      digitalWrite(m2b,LOW);
      }
    else if(data=='3'){
      digitalWrite(m1a,LOW);
      digitalWrite(m1b,HIGH);
      digitalWrite(m2a,HIGH);
      digitalWrite(m2b,LOW);
      }
    else if(data=='4'){
      digitalWrite(m1a,HIGH);
      digitalWrite(m1b,LOW);
      digitalWrite(m2a,LOW);
      digitalWrite(m2b,HIGH);
      }
     else{
      digitalWrite(m1a,LOW);
      digitalWrite(m1b,LOW);
      digitalWrite(m2a,LOW);
      digitalWrite(m2b,LOW);
     }
  }
}
