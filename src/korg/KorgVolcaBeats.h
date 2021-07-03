#ifndef MAQUINITAS_PARAMS_KORG_VOLCA_BEATS_H
#define MAQUINITAS_PARAMS_KORG_VOLCA_BEATS_H

/// @include library MaquinitasParameters
#include "MaquinitasParams.h"

class KorgVolcaBeats: public MaquinitasParams {
  public:
    KorgVolcaBeats() {
      year = 2013;
    }

    int midiChannel = 10;

    int kick = 36;
    int snare = 38;
    int clap = 39;
    int hihatClosed = 42;
    int tomLow = 43;
    int hiHatOpen = 46;
    int tomHigh = 50;
    
};

#endif
