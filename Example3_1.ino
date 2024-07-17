//================= Example3_1 ====================
#define LED 2
#define TIME 500
void setup(){ 
  pinMode(LED,OUTPUT);
 } 
void loop(){ 
    digitalWrite(LED,1);
    delay(TIME);
    digitalWrite(LED,0);
    delay(TIME);
    }
//=================================================
