#include <MaquinitasParams.h>
#include <korg/KorgVolcaBeats.h>

KorgVolcaBeats beats;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(beats.kick);
  Serial.println(beats.snare);
  Serial.println(beats.year);

}
