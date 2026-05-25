#include "Employee.h"
#include <iostream>

using namespace std;

int Employee::count = 0;

Employee::Employee(string n)
    : name(n)
{
    count++;
}

Employee::Employee(const Employee& other)
{
    name = other.name;
    count++;
}

Employee& Employee::operator=(const Employee& other)
{
    if(this == &other)
        return *this;

    name = other.name;

    return *this;
}

Employee::~Employee()
{
}

void Employee::getInfo() const
{
    cout << "Name: " << name << endl;
}

int Employee::getCount()
{
    return count;
}

double Employee::getAverageSalary(
    const vector<Employee*>& staff)
{
    if(staff.empty())
        return 0;

    double sum = 0;

    for(auto e : staff)
        sum += e->calculateSalary();

    return sum / staff.size();
}