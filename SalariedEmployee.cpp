#include "SalariedEmployee.h"

#include <iostream>

using namespace std;

SalariedEmployee::SalariedEmployee(
    string n,
    double b,
    int e
)
    : Employee(n),
      baseSalary(b),
      experience(e)
{
}

SalariedEmployee::SalariedEmployee(
    const SalariedEmployee& other
)
    : Employee(other),
      baseSalary(other.baseSalary),
      experience(other.experience)
{
}

SalariedEmployee&
SalariedEmployee::operator=(
    const SalariedEmployee& other
)
{
    if (this == &other)
        return *this;

    Employee::operator=(other);

    baseSalary = other.baseSalary;
    experience = other.experience;

    return *this;
}

void SalariedEmployee::getInfo() const
{
    Employee::getInfo();

    cout
        << "Base salary: "
        << baseSalary
        << " rub, Experience: "
        << experience
        << " years"
        << endl;
}

double SalariedEmployee::getBaseSalary() const
{
    return baseSalary;
}

int SalariedEmployee::getExperience() const
{
    return experience;
}