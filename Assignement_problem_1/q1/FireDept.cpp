#include "FireDept.hpp"
using namespace std;
void FireDept::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void FireDept::removeObserver(Observer *observer) {
    // find the observer
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if (iterator != observers.end()) { // observer found
        observers.erase(iterator); // remove the observer
    }
}

void FireDept::notifyObservers() {
    for (Observer *observer : observers) { // notify all observers
        observer->action("fire alarm near "+location);
    }
}
void FireDept::setAlarm(string location)
{
        this->location = location;
        notifyObservers();
}

