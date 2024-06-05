
// para ver en que puerto está el arduino, y así pasárselo como parámetro a python, habria que meter todo en un mismo script :/
int x; 
void setup() { 
  Serial.begin(115200); 
  Serial.setTimeout(1); 
} 
void loop() { 
  while (!Serial.available()); 
  x = Serial.readString().toInt(); 
  Serial.print(x + 1); 
} 