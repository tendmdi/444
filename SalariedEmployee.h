#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee
{
protected:
    double baseSalary;
    int experience;

public:
    SalariedEmployee(
        std::string n,
        double b,
        int e
    );

    SalariedEmployee(
        const SalariedEmployee& other
    );

    SalariedEmployee& operator=(
        const SalariedEmployee& other
    );

    void getInfo() const override;

    double getBaseSalary() const;

    int getExperience() const;
};

#endif