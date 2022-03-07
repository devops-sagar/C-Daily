#include "People.hpp"
using namespace std;
void People::action(std :: string s)
    {
        cout << name << " is running away from a " << s << endl;
    }
 People::People(std :: string s) {
        this->name = s;
    }
