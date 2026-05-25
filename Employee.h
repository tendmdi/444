#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>

class Employee
{
protected:
    std::string name;
    static int count;

public:
    Employee(std::string n);
    Employee(const Employee& other);

    Employee& operator=(const Employee& other);

    virtual ~Employee();

    virtual double calculateSalary() const = 0;

    virtual void getInfo() const;

    static int getCount();

    static double getAverageSalary(
        const std::vector<Employee*>& staff
    );
};

#endif