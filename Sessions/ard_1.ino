int entrada;
void setup() {
 Serial.begin(9600);
 Serial.println("BIENVENIDO");
}

void loop(){
  entrada = analogRead(0);
  Serial.println(entrada);
  delay(500);
}

