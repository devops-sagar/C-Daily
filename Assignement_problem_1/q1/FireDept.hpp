
#ifndef OBSERVER_PATTERN_FIREDEPT_HPP
#define OBSERVER_PATTERN_FIREDEPT_HPP

#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.hpp"
#include "Observer.hpp"


class FireDept : public Subject {
    std::vector<Observer *> observers; // observers

    std::string location;

public:

    void registerObserver(Observer *observer) override;

    void removeObserver(Observer *observer) override;

    void notifyObservers() override;
    
    void setAlarm(std :: string location);

};


#endif
