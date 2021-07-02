#ifndef MAQUINITAS_PARAMETERS_KORG_VOLCA_BASS_H
#define MAQUINITAS_PARAMETERS_KORG_VOLCA_BASS_H

/// @include library MaquinitasParameters
#include "MaquinitasParameters.h""

class KorgVolcaBass: public MaquinitasParameters {
  public:
    int kick = 36;
    int snare = 38;
    int clap = 39;
    int hihatClosed = 42;
    int tomLow = 43;
    int hiHatOpen = 46;
    int tomHigh = 50;
};

#endif
