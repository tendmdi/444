#ifndef MANAGER_H
#define MANAGER_H

#include "SalariedEmployee.h"

class Manager : virtual public SalariedEmployee
{
protected:
    int teamSize;

public:
    Manager(
        std::string n,
        double b,
        int e,
        int t
    );

    double calculateSalary() const override;

    int getTeamSize() const;
};

#endif