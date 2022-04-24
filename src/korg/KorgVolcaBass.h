#ifndef MAQUINITAS_PARAMS_KORG_VOLCA_BASS_H
#define MAQUINITAS_PARAMS_KORG_VOLCA_BASS_H

/// @include library MaquinitasParameters
#include "MaquinitasParams.h"

class KorgVolcaBass: public MaquinitasParams {
  public:
    KorgVolcaBass() {
      year = 2013;
    }

    KorgVolcaBass::setup() {
      Serial.begin(9600);
    }

};

#endif
