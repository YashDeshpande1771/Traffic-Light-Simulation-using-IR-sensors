int r1 = 13;
int y1 = 12;
int g1 = 11;
int r2 = 10;
int y2 = 9;
int g2 = 8;
int r3 = 7;
int y3 = 6;
int g3 = 5;
int r4 = 4;
int y4 = 3;
int g4 = 2;
//Eng; ALI MEKAAL
void setup() {
pinMode (r1, OUTPUT);
pinMode (y1, OUTPUT);
pinMode (g1, OUTPUT);

pinMode (r2, OUTPUT);
pinMode (y2, OUTPUT);
pinMode (g2, OUTPUT);

pinMode (r3, OUTPUT);
pinMode (y3, OUTPUT);
pinMode (g3, OUTPUT);

pinMode (r4, OUTPUT);
pinMode (y4, OUTPUT);
pinMode (g4, OUTPUT);

//ALI KARKUKI

}

void loop() { 
    
digitalWrite(g1, HIGH);
digitalWrite(r2, HIGH);
digitalWrite(r3, HIGH);
digitalWrite(r4, HIGH);
delay(9000);
digitalWrite(g1, LOW);
digitalWrite(r2, LOW);

digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(3000);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);

digitalWrite(r1, HIGH);
digitalWrite(g2, HIGH);
delay(9000);

digitalWrite(g2, LOW);
digitalWrite(r3, LOW);


digitalWrite(y2, HIGH);
digitalWrite(y3, HIGH);
delay(3000);

digitalWrite(y2, LOW);
digitalWrite(y3, LOW);


digitalWrite(r2, HIGH);
digitalWrite(g3, HIGH);
digitalWrite(r4, HIGH);
delay(9000);

digitalWrite(g3, LOW);
digitalWrite(r4, LOW);
//??? ??????? 

digitalWrite(y3, HIGH);
digitalWrite(y4, HIGH);
delay(3000);

digitalWrite(y3, LOW);
digitalWrite(y4, LOW);

digitalWrite(r3, HIGH);
digitalWrite(g4, HIGH);
delay(9000);

digitalWrite(r3, LOW);
digitalWrite(g4, LOW);
digitalWrite(r1, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y4, HIGH);
delay(3000);

digitalWrite(y1, LOW);
digitalWrite(y4, LOW);


}
