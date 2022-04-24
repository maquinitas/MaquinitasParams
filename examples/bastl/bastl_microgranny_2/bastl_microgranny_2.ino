#include <MaquinitasParams.h>
#include <bastl/BastlMicrogranny2.h>

BastlMicrogranny2 microgranny;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(microgranny.year);

}
