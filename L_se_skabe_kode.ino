String input = "";
String Koden = "999"; //sæt koden

//Led=HIGH laast op
//Led=LOW laast

void setup() {
  Serial.begin (9600);
  Serial.println ("Hvad er koden?"); 
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite (LED_BUILTIN, LOW); //skabet starter med at være låst
}

void loop() {

//user interface:
  if (Serial.available() > 0){
  input = Serial.readString();
  if (input.substring (0,3) == Koden){
  Serial.println ("Korrekt!");
  digitalWrite (LED_BUILTIN, HIGH);
  delay (250);
  digitalWrite (LED_BUILTIN, LOW);
  delay (250);
   digitalWrite (LED_BUILTIN, HIGH);
  delay (250);
  digitalWrite (LED_BUILTIN, LOW);
  delay (250);
  digitalWrite (LED_BUILTIN, HIGH);
  }
  
  else{
  Serial.println ("Forkert");
  digitalWrite (LED_BUILTIN, HIGH);
  delay (1000);
  digitalWrite (LED_BUILTIN, LOW);
  delay (9000);
  Serial.println ("Prøv igen");
  }
  }
}
