#include <MaquinitasParams.h>
#include <bastl/BastlThyme.h>

BastlThyme thyme;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(thyme.year);

}
