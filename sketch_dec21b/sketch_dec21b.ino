void setup() {
  for(int pin=2; pin<=8; pin++){
    pinMode(pin,OUTPUT);
  }
}
void loop() {
  sifirla();
  // H yazdırma işlemi
  digitalWrite(2,0); //ortak anot olduğu için 0 ile aktif olur.
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(8,0);
  delay(1500);
  sifirla();
  // a yazdırma işlemi
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  delay(1500);
  sifirla();
  //r yazdırma
  digitalWrite(2,0);
  digitalWrite(5,0);
  delay(1500);
  sifirla();
  // u yazdırma
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  delay(1500);
  sifirla();
  // n yazdırma
  digitalWrite(2,0);
  digitalWrite(5,0);
  digitalWrite(4,0);
  delay(1500);
  sifirla();
}
void sifirla(){
  for(int pin=2; pin<=8; pin++){
    digitalWrite(pin,HIGH);
  }
  delay(100);
}
