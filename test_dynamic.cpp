#include <iostream>

#include "Manager.h"
#include "Developer.h"
#include "TeamLead.h"

using namespace std;

int main()
{
    Manager m("Ivan Petrov",50000,5,3);

    Developer d("Anna Sidorova",60000,3,4);

    TeamLead tl("Oleg Ivanov",70000,6,5,2);

    cout << "Manager salary: "
         << m.calculateSalary()
         << endl;

    cout << "Developer salary: "
         << d.calculateSalary()
         << endl;

    cout << "TeamLead salary: "
         << tl.calculateSalary()
         << endl;

    return 0;
}