#ifndef MAQUINITAS_PARAMS_ROLAND_TR_09_H
#define MAQUINITAS_PARAMS_ROLAND_TR_09_H

/// @include library MaquinitasParameters
#include "MaquinitasParams.h"

class RolandTR09: public MaquinitasParams {
  public:
    RolandTR09() {
      year = 2016;
    }

    int midiChannel = 10;

    /// drum voices
    int kick = 36;
    int rim = 37;
    int snare = 38;
    int clap = 39;
    int hiHatClosed = 42;
    int tomLow = 43;
    int hiHatOpen = 46;
    int tomMid = 47;
    int crash = 49;
    int tomHigh = 50;
    int ride = 51;


    /// control change
    int shuffle  = 9;
    int kickTune = 20;
    int kickAttack = 21;
    int kickComp = 22;
    int kickDecay = 23;
    int kickLevel = 24;
    int snareTune = 25;
    int snareSnappy = 26;
    int snareComp = 27;
    int snareTone = 28;
    int snareLevel = 29;
    int tomLowTune = 46;
    int tomLowDecay = 47;
    int tomLowLevel = 48;
    int tomMidTune = 49;
    int tomMidDecay = 50;
    int tomMidLevel = 51;
    int tomHighTune = 52;
    int tomHighDecay = 53;
    int tomHighLevel = 54;
    int rimTune = 55;
    int rimDecay = 56;
    int rimLevel = 57;
    int clapTune = 58;
    int clapDecay = 59;
    int clapLevel = 60;
    int hiHatClosedTune = 61;
    int hiHatClosedDecay = 62;
    int hiHatClosedLevel = 63;
    int totalAccent = 71;
    int hiHatOpenTune = 80;
    int hiHatOpenDecay = 81;
    int hiHatOpenLevel = 82;
    int crashTune = 83;
    int crashDecay = 84;
    int crashLevel = 85;
    int rideTune = 86;
    int rideDecay = 87;
    int rideLevel = 88;

};

#endif
