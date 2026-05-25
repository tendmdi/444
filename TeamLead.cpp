#include "TeamLead.h"

using namespace std;

TeamLead::TeamLead(
    string n,
    double b,
    int e,
    int t,
    int p
)
    : SalariedEmployee(n, b, e),
      Manager(n, b, e, t),
      Developer(n, b, e, p)
{
}

TeamLead::TeamLead(
    const TeamLead& other
)
    : SalariedEmployee(other),
      Manager(other),
      Developer(other)
{
}

TeamLead&
TeamLead::operator=(
    const TeamLead& other
)
{
    if (this == &other)
        return *this;

    SalariedEmployee::operator=(other);
    Manager::operator=(other);
    Developer::operator=(other);

    return *this;
}

double TeamLead::calculateSalary() const
{
    return getBaseSalary()
         + getExperience() * 100
         + getTeamSize() * 200
         + getProjects() * 300;
}