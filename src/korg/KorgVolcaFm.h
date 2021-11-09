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

    int ccTranspose = 40;
    int ccVelocity = 41;
    int ccModulatorAttack = 42;
    int ccModulatorDecay = 43;
    int ccCarrierAttack = 44;
    int ccCarrierDecay = 45;
    int ccLfoRate = 46;
    int ccLfoPitchDepth = 47;
    int ccAlgorithm = 48;
    int ccArpType = 49;
    int ccArpDiv = 50;

};

#endif
