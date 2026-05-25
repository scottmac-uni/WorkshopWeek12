#include "Location.h"
#pragma once

class Entity {
	Location _location;

public:
	Location getLocation() { return _location; }
	void setLocation(Location location) { _location = location; }
};