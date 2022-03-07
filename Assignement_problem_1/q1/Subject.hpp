#ifndef OBSERVER_PATTERN_SUBJECT_HPP
#define OBSERVER_PATTERN_SUBJECT_HPP

#include "Observer.hpp"

class Subject {

public:

    virtual void registerObserver(Observer *observer) = 0;

    virtual void removeObserver(Observer *observer) = 0;

    virtual void notifyObservers() = 0;

};

#endif
