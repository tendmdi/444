#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "SalariedEmployee.h"

class Developer : virtual public SalariedEmployee
{
protected:
    int* projects;

public:
    Developer(
        std::string n,
        double b,
        int e,
        int p
    );

    Developer(
        const Developer& other
    );

    Developer& operator=(
        const Developer& other
    );

    ~Developer();

    double calculateSalary() const override;

    int getProjects() const;
};

#endif