#include <MaquinitasParams.h>
#include <korg/KorgMinilogue.h>

KorgMinilogue minilogue;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(minilogue.year);

}
