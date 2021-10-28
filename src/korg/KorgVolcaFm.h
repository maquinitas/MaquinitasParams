#ifndef MAQUINITAS_PARAMS_KORG_VOLCA_FM_H
#define MAQUINITAS_PARAMS_KORG_VOLCA_FM_H

/// @include library MaquinitasParameters
#include "MaquinitasParams.h"

class KorgVolcaFm: public MaquinitasParams {
  public:
    KorgVolcaFm() {
      year = 2015;
    }

    int midiChannel = 1;

};

#endif
