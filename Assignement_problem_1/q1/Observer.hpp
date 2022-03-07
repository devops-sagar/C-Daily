#ifndef OBSERVER_PATTERN_OBSERVER_HPP
#define OBSERVER_PATTERN_OBSERVER_HPP
#include <iostream>

class Observer {

public:
	virtual void action(std :: string s) = 0;
};


#endif 
