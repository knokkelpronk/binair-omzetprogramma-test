#define klascode = EV2A;
#define groepnummer = 2;
#define modulecode = MM;  

void setup() {
  Serial.begin(9600);
}

void loop() {

  startOfCommunication()

    delay(500);
}

int startOfCommunication() {
  char startchar[] = "01";  //stel je binaire waarde in
  uint32_t startbits = strtoul(startchar, NULL, 2);
  // zet om van string naar unsigned long in binair;
  // eerst defineer je welke char,
  // dan waar hij moet stoppen, in dit geval tot NULL
  // NULL is het einde van de string oftewel "0"
  // dan het talstelsel, in het geval van binair "2"

  Serial.println(startbits, BIN);
  // print uit voor debug, BIN wordt gebuikt
  // zo print ie het uit in decimaal ipv hex

  return 0;maak een functietje dat werkt met binair 

}

int startOfCommunication() {
  char startchar[] = "01";  //stel je binaire waarde in
  uint32_t startbits = strtoul(startchar, NULL, 2);
  // zet om van string naar unsigned long in binair;
  // eerst defineer je welke char,
  // dan waar hij moet stoppen, in dit geval tot NULL
  // NULL is het einde van de string oftewel "0"
  // dan het talstelsel, in het geval van binair "2"

  Serial.println(startbits, BIN);
  // print uit voor debug, BIN wordt gebuikt
  // zo print ie het uit in decimaal ipv hex

  return 0;
}

int functievoor maken van sourcechar vanuit de defines boven

int sourceVeld() {
  char sourcechar[] = int maakstring;  //stel je binaire waarde in

  for (int i = 0; i < sizeof(sourcechar); i++) {
    if i == 1 || 2 (sourcechar [1] =  
  }

  uint32_t sourcebits = strtoul(startchar, NULL, 2);
  // zet om van string naar unsigned long in binair;
  // eerst defineer je welke char,
  // dan waar hij moet stoppen, in dit geval tot NULL
  // NULL is het einde van de string oftewel "0"
  // dan het talstelsel, in het geval van binair "2"

  Serial.println(sourcebits, BIN);
  // print uit voor debug, BIN wordt gebuikt
  // zo print ie het uit in decimaal ipv hex

  return 0;
}
