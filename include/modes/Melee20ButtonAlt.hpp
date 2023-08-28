#ifndef _MODES_MELEE20BUTTONALT_HPP
#define _MODES_MELEE20BUTTONALT_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

typedef struct {
    bool crouch_walk_os = false;
} Melee20ButtonAltOptions;

class Melee20ButtonAlt : public ControllerMode {
  public:
    Melee20ButtonAlt(socd::SocdType socd_type, Melee20ButtonAltOptions options = {});

  protected:
    void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);

  private:
    Melee20ButtonAltOptions _options;
    bool _horizontal_socd;

    void HandleSocd(InputState &inputs);
};

#endif
