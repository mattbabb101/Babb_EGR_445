int inByte = 0;
int data1 = 0;

void setup()                    // run once, when the sketch starts
{
  Serial.begin(115200);           // set up Serial library at 115200 bps  
  Serial.print("EGR 445 Serial Starting Point");  // prints welcome message
  Serial.print('\n');  // prints newline character
}

void loop()                       // run over and over again
{
  if (Serial.available() > 0) {
    inByte = Serial.read();//get the menu select byte
    if (inByte == 1){
      Serial.print("case 1");
      Serial.print('\n');
    }
    else if (inByte == 2){
      Serial.print("case 2");
      Serial.print('\n');
    }
    else if (inByte == 3){
      data1 = Serial.read(); 
      Serial.print("data1: ");
      Serial.print(data1);
      Serial.print('\n');
    }
    else{
      Serial.print("case not recognized: ");
      Serial.print(inByte);
      Serial.print('\n');
    }
  }
  delay(100);
}
