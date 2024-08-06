#include "../../inc/MarlinConfig.h"
#include "../../HAL/HAL.h"

#include "../gcode.h"

void GcodeSuite::M9891() {
  const uint16_t dfreq = parser.ushortval('F');

  // Set frequency for FAN0 (part cooler on ender 3 v422)
  set_pwm_frequency(pin_t(FAN0_PIN), dfreq);
}