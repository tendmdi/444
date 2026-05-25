#ifndef TEAMLEAD_H
#define TEAMLEAD_H

#include "Manager.h"
#include "Developer.h"

class TeamLead
    : public Manager,
      public Developer
{
public:
    TeamLead(
        std::string n,
        double b,
        int e,
        int t,
        int p
    );

    TeamLead(
        const TeamLead& other
    );

    TeamLead& operator=(
        const TeamLead& other
    );

    double calculateSalary() const override;
};

#endif