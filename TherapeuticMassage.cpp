#include "TherapeuticMassage.h"

//Construtor default 
TherapeuticMassage::TherapeuticMassage() : Service() {
    name = "Personalized therapeutic massage";
}

// constructor 
TherapeuticMassage::TherapeuticMassage(int duration, double basePrice) 
    : Service("Personalized therapeutic massage", duration, basePrice) {
}

// calculate the price of the massage
double TherapeuticMassage::calculatePrice() {
    double finalPrice = basePrice;
    
    // Massage over 60 min
    if (duration > 60) {
        finalPrice += 200;
    }
    
    // the discuount 
    if (clientType == "Returning Client") {
        finalPrice *= 0.9; 
    }
    
    return finalPrice;
}

void TherapeuticMassage::displaySummary() {
}
