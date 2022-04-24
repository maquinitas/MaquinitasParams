#include <MaquinitasParams.h>
#include <korg/KorgVolcaBass.h>

KorgVolcaBass bass;

void setup() {

  bass.setup();

}

void loop() {

  Serial.println(bass.year);

}
