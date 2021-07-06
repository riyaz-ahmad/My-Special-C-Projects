
#include <bits/stdc++.h>
using namespace std;

class Employee {
public: // public access-modifier
    string id, name;
    int years;

    Employee(string id)
        : id(id)
    {
    }

    // uses constructor1               constructor1 call
    Employee(string id, string name)
        : Employee(id)
    {
        this->name = name;
    }

    // uses constructor2                       constructor2 call
    Employee(string id, string name, int years)
        : Employee(id, name)
    {
        this->years = years;
    }

    void getDetails()
    {
        cout << "ID: " << id << ", Name: " << name
             << ", Experience: " << years << endl;
    }
};

int main()
{
    Employee emp("GFG123", "John", 4);
    emp.getDetails();

    return 0;
}
