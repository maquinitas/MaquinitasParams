#include <MaquinitasParams.h>
#include <roland/RolandTR09.h>

RolandTR09 tr09;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(tr09.kick);
  Serial.println(tr09.snare);
  Serial.println(tr09.year);

}
