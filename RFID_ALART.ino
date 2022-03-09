char input[12];
int count = 0; 

void setup() 
{                
  Serial.begin(9600);
  Serial.println("SRI ELECTRONIC & EMBEDDED SOLUTIONS");
}

void loop() 
{  
  delay(1);
  if(Serial.available())
  {
    count=0;
    while(Serial.available() && count < 12) 
    {
       input[count] = Serial.read();
       count++;
       delay(5);
    }
    Serial.println(input); 

    if((input[0]=='0') && (input[1]=='8') && (input[2]=='0') && 
       (input[3]=='0') && (input[4]=='8') && (input[5]=='8') && 
       (input[6]=='6') && (input[7]=='A') && (input[8]=='A') && 
       (input[9]=='7') && (input[10]=='4') && (input[11]=='D'))
    {  
       Serial.println("PERSON 1");
    }  

    else
    {
       Serial.println("ALART...");
    }
  }
}
