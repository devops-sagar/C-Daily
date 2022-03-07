#ifndef OBSERVER_PATTERN_ORGANIZATION_HPP
#define OBSERVER_PATTERN_ORGANIZATION_HPP

#include <iostream>
#include "Observer.hpp"

class Organization : public Observer {


public:

    Organization(std :: string s);

    virtual void action(std :: string s) override;
  protected:
    std:: string name;

};


#endif 
