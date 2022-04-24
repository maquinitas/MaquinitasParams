// include MaquinitasParams library
#include <MaquinitasParams.h>

// include parameters for Korg Volca FM
#include <korg/KorgVolcaFm.h>

// declare new 
KorgVolcaFm fm;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(fm.year);

}
