#include <MaquinitasParams.h>
#include <korg/KorgVolcaFm.h>

KorgVolcaFm fm;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(fm.year);

}
