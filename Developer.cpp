#include "Developer.h"

#include <stdexcept>

using namespace std;

Developer::Developer(
    string n,
    double b,
    int e,
    int p
)
    : SalariedEmployee(n, b, e)
{
    projects = new int(p);
}

Developer::Developer(
    const Developer& other
)
    : SalariedEmployee(other)
{
    projects =
        new int(*other.projects);
}

Developer&
Developer::operator=(
    const Developer& other
)
{
    if (this == &other)
        return *this;

    SalariedEmployee::operator=(other);

    delete projects;

    projects =
        new int(*other.projects);

    return *this;
}

Developer::~Developer()
{
    delete projects;
}

double Developer::calculateSalary() const
{
    if (*projects < 0)
        throw invalid_argument(
            "Negative number of projects!"
        );

    return baseSalary +
           experience * 100 +
           (*projects) * 300;
}

int Developer::getProjects() const
{
    return *projects;
}