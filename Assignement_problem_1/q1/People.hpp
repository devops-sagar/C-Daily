#ifndef OBSERVER_PATTERN_PEOPLE_HPP
#define OBSERVER_PATTERN_PEOPLE_HPP

#include <iostream>
#include "Observer.hpp"

class People : public Observer {


public:

    People(std :: string s);

    virtual void action(std :: string s) override;
protected:
    std:: string name;

};


#endif 
