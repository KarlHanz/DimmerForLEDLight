
// http://arduino.ru/forum/programmirovanie/plavnoe-vklyuchenie-svetodiodov


#define inPin PB3    // будет вход, ATTINY13A pin 2 (порт PB3)
#define outPin PB1    // будет выход, ATTINY13A pin 6 (порт PB1) 

bool state = 0; // текущее состояние
bool PinState; // LOW - ВКЛ. HIGH - ВЫКЛ.



void setup() {
  pinMode(inPin, INPUT); // режим как вход
  pinMode(outPin, OUTPUT); // режим как выход
//  digitalWrite(outPin, HIGH); // включаю свет
}

void loop() {
  PinState = digitalRead(inPin); // прочитать вход
  
  
  if (PinState == 1) {        // 
    for (int i = 0; i <= 255; i++) {  // увеличиваем яркость 
      analogWrite(outPin, i);
      delay (30);
    }
  }
  
  else {      // 
    for (int i = 255; i >= 0; i--) { // уменьшаем яркость 
     analogWrite(outPin, i);
      delay (30);
    }
    }
  
}
