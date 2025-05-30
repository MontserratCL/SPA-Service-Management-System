#ifndef THERAPEUTICMASSAGE_H
#define THERAPEUTICMASSAGE_H

#include "Service.h"

class TherapeuticMassage : public Service {
public:
    // Constructor
    TherapeuticMassage();
    TherapeuticMassage(int duration, double basePrice);
    
    // Override virtual methods
    double calculatePrice() override;
    void displaySummary() override;
};

#endif
