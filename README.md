# GrovePWMActuator
Generic PWM Actuator Library for Arduino + Grove shield

## Example
```c++
#include <GrovePWMActuator.h>

GrovePWMActuator motor;

void setup() {
  motor.initialize(GROVE_D3);
  motor.turnOff();
}

void loop() {
  float command;
  for(command = 0; command < 1; command += 0.1) {
	motor.setCommand(command);
	delay(100);
  }
  for(command = 1; command > 0; command -= 0.1) {
	motor.setCommand(command);
	delay(100);
  }
}
```

## Documentation

###`void initialize(GrovePin pins)`
Initialize the sensor before using it.

Parameters:
- `pins`: Must be a digital socket supporting PWM mode (GROVE_D3, GROVE_D5 or GROVE_D6)

###`void command(float command)`
Turn the actuator on with a specific power.

Parameters:
- `command`: The command between 0 and 1 (0 is off ; 1 is full power)

###`void turnOff()`
Turn the actuator off
