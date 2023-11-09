#ifndef ControlPLC_h
#define ControlPLC_h

#include "Arduino.h"

class OutputRelay {
  public:
    OutputRelay(int pinWrite);
    void Active();
    void NotActive();
  private:
    int _pinWrite;
};

#endif
