#include "GrovePWMActuator.h"

GrovePWMActuator::GrovePWMActuator() {
	this->_command = 0;
}

void GrovePWMActuator::_refresh() {
	analogWrite(this->_pin, this->_command);
}

void GrovePWMActuator::initialize(GrovePin pins) {	
	this->_pin = pins.pin1;
	pinMode(this->_pin, OUTPUT);
	this->_refresh();
}

void GrovePWMActuator::setCommand(float command) {
	this->_command = command * 255;
	this->_refresh();
}

void GrovePWMActuator::turnOff() {
	this->_command = 0;
	this->_refresh();
}