#include <MaquinitasParams.h>
#include <korg/KorgVolcaBass.h>

KorgVolcaBass bass;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(bass.year);

}
