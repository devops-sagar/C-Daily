#include "PoliceDept.hpp"
using namespace std;
void PoliceDept::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void PoliceDept::removeObserver(Observer *observer) {
    // find the observer
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if (iterator != observers.end()) { // observer found
        observers.erase(iterator); // remove the observer
    }
}

void PoliceDept::notifyObservers() {
    for (Observer *observer : observers) { // notify all observers
        observer->action("attack alarm near "+location);
    }
}
void PoliceDept::setAlarm(string location)
{
        this->location = location;
        notifyObservers();
}


