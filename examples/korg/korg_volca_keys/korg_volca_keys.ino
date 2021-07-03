#include <MaquinitasParams.h>
#include <korg/KorgVolcaKeys.h>

KorgVolcaKeys keys;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(keys.year);

}
