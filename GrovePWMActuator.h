#ifndef GrovePWMActuator_H
#define GrovePWMActuator_H

#include <Arduino.h>
#include <Grove.h>

class GrovePWMActuator {
	private:
		unsigned int _pin;
		unsigned char _command;

	protected:
		void _refresh();
		
	public:
		GrovePWMActuator();
		virtual ~GrovePWMActuator() {};
		void initialize(GrovePin pins);
		void setCommand(float command);
		void turnOff();
};

#endif