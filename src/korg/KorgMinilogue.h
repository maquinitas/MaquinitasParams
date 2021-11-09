#ifndef MAQUINITAS_PARAMS_KORG_MINILOGUE_H
#define MAQUINITAS_PARAMS_KORG_MINILOGUE_H

/// @include library MaquinitasParameters
#include "MaquinitasParams.h"

class KorgMinilogue: public MaquinitasParams {
  public:
    KorgMinilogue() {
      year = 2016;
    }

  int midiChannel = 1;

  // control change messages
  int bankSelectMSB = 0;
  int bankSelectLSB = 32;
  int pitchVCO1 = 34;
  int pitchVCO2 = 35;
  int shapeVCO1 = 36;
  int shapeVCO2 = 37;
  int levelVCO1 = 39;
  int levelVCO2 = 40;
  int levelNoise = 33;
  int crossModDepth = 41;
  int pitchEGInt = 42;
  int filterCutoff = 43;
  int filterResonance = 44;
  int filterEGInt = 45;
  int ampEGAttack = 16;
  int ampEGDecay = 17;
  int ampEGSustain = 18;
  int ampEGRelease = 19;
  int EGAttack = 20;
  int EGDecay = 21;
  int EGSustain = 22;
  int EGRelease = 23;
  int LFORate = 24;
  int LFODepth = 26;
  int voiceDepth = 27;
  int delayHiPass = 29;
  int delayTime = 30;
  int delayFeedback = 31;
  int octaveVCO1 = 48;
  int octaveVCO2 = 49;
  int waveVCO1 = 50;
  int waveVCO2 = 51;
  int sync = 80;
  int ring = 81;
  int velocityKeyTrack = 82;
  int keyboardTrack = 83;
  int filterType = 84;
  int delayOutputRouting = 88;
  int LFOTarget = 56;
  int LFOEGMod = 57;
  int LFOWave = 58;
  int allSoundOff = 120;
  int resetAllControllers = 121;
  
};

#endif
