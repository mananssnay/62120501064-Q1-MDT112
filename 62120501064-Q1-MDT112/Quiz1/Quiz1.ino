
#define BUZZER 8

void setup(){ 
Serial.begin(9600);
pinMode(BUZZER,OUTPUT); //เสียง

     tone(8,200,500); //เสียงที่1
     
     delay(100);

     noTone(BUZZER);
     tone(8,400,100); //เสียงที่2


pinMode(3, OUTPUT); //ไฟวิ่งไปกลับ
pinMode(4, OUTPUT);  
pinMode(5, OUTPUT); 
pinMode(6, OUTPUT); 
pinMode(7, OUTPUT); 
pinMode(8, OUTPUT); 
pinMode(9, OUTPUT);  
pinMode(10, OUTPUT);
pinMode(11, OUTPUT); 
pinMode(12, OUTPUT);  
pinMode(13, OUTPUT);
pinMode(2, INPUT_PULLUP);


digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);

digitalWrite(4,HIGH);
delay(100);
digitalWrite(4,LOW);

digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);

digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);

digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);

digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);

digitalWrite(9,HIGH);
delay(100);
digitalWrite(9,LOW);

digitalWrite(10,HIGH);
delay(100);
digitalWrite(10,LOW);

digitalWrite(11,HIGH);
delay(100);
digitalWrite(11,LOW);

digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);

digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);

digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);

digitalWrite(11,HIGH);
delay(100);
digitalWrite(11,LOW);

digitalWrite(10,HIGH);
delay(100);
digitalWrite(10,LOW);

digitalWrite(9,HIGH);
delay(100);
digitalWrite(9,LOW);

digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);

digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);

digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);

digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);

digitalWrite(4,HIGH);
delay(100);
digitalWrite(4,LOW);

digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);

delay(100);
} 

int count = 1;  
int led = 3;  
int time = 100;  

void loop(){
   
 for (led=3; led<=13; led++)
    {
        if(led == 8)
        {
            digitalWrite(led,LOW);
            continue;
        }

        digitalWrite(led,HIGH);

        while (digitalRead(2) == LOW)
        {   
            
            if (digitalRead(2) == HIGH)
            {               
                 
                count = count * count;
                tone(8,400,100);
                Serial.println("Faster X 2 (Current Speed : X" + String(count) + ")");     //เพิ่มความเร็วคูณ2                          
                time = time/2;
            }
        }     delay(time);
        digitalWrite(led,LOW);               
    }
    for (led = 13;led >= 3;led--)
    {
        if(led == 8)
        {
            digitalWrite(led,LOW);
            continue;
        }
        digitalWrite(led,HIGH);

        while (digitalRead(2) == LOW)
        {   
           
            if (digitalRead(2) == HIGH)
            {               
                
                count = count * count;
                tone(8,400,100); 
                Serial.println("Faster X 2 (Current Speed : X" + String(count) + ")");                               
                time = time/2;
            }
        }    delay(time);
        digitalWrite(led,LOW);         
    }

}
