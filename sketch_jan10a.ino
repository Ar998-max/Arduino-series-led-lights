

int pin1 = 10;
int pin2 = 9; 
int pin3 = 3;
int p4 = 11;
int p5 = 4;
int p6 = 5;
int p7 = 6;
int p8 = 7;
int arr [8] = {pin1, pin2, pin3, p4, p5, p6, p7, p8};
int one = 1;
// int arr2 [] = {};
int arr2 [8] = {p8, p7, p6, p5, p4, pin3, pin2, pin1};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i<8; i++){
    pinMode(arr[i], OUTPUT);

  // reva();
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i<8; i++){
     
    digitalWrite(arr[i], HIGH);
    delay(100);
    }

  for (int i = 0; i<8; i++){
    digitalWrite(arr[i], LOW);
    delay(100);
    
 
  }

  for (int i = 0; i<8; i++){
    digitalWrite(arr2[i], HIGH);
    delay(100);
  }

  for (int i = 0; i<8; i++){
    digitalWrite(arr2[i], LOW);
    delay(100);
  }

  for (int i = 4; i>=0; i--){
    digitalWrite(arr[i],HIGH);
    digitalWrite(arr2[i],HIGH);
    delay(100);
  }

  for (int i = 4; i>=0; i--){
    digitalWrite(arr[i],LOW);
    digitalWrite(arr2[i],LOW);
    delay(100);
  }

    for (int i = 0; i<4; i++){
    digitalWrite(arr[i],HIGH);
    digitalWrite(arr2[i],HIGH);
    delay(100);
  }

    for (int i = 0; i<4; i++){
    digitalWrite(arr[i],LOW);
    digitalWrite(arr2[i],LOW);
    delay(100);
  }


    
}

/*
int reva(){
  int x = 0;
  int y = 8;
  while(y){
    arr[x] = arr2[y];
    x++;
    y--;
    
  }

  for(int i = 0; i < 8; i++){
    Serial.println(arr2[i]);
  }

  
  
}
*/
