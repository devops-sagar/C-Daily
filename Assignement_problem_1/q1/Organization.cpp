#include "Organization.hpp"
using namespace std;
void Organization::action(string s)
    {
        cout << name << " is paying attention on a " << s << endl;
    }
 Organization::Organization(string s) {
        this->name = s;
    }

