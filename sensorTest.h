void setup(){
int left = 52;
int right = 48;
int middle = 50;

int Left = 0;
int Right = 0;
int Middle = 0;
}

void loop(){
    Left = digitalRead(left);
    Right = digitalRead(right);
    Middle = digitalRead(middle);
    
    Serial.println(Left, Right, Middle);
}