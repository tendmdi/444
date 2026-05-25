#include "Manager.h"

#include <stdexcept>

using namespace std;

Manager::Manager(
    string n,
    double b,
    int e,
    int t
)
    : SalariedEmployee(n, b, e),
      teamSize(t)
{
}

double Manager::calculateSalary() const
{
    if (teamSize < 0)
        throw invalid_argument(
            "Negative team size!"
        );

    return baseSalary +
           experience * 100 +
           teamSize * 200;
}

int Manager::getTeamSize() const
{
    return teamSize;
}