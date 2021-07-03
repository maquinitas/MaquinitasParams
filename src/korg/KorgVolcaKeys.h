#ifndef MAQUINITAS_PARAMS_KORG_VOLCA_KEYS_H
#define MAQUINITAS_PARAMS_KORG_VOLCA_KEYS_H

/// @include library MaquinitasParameters
#include "MaquinitasParams.h"

class KorgVolcaKeys: public MaquinitasParams {
  public:
    KorgVolcaKeys() {
      year = 2013;
    }

  int midiChannel = 1;

};

#endif
