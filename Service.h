#ifndef SERVICE_H
#define SERVICE_H

#include <string>
using namespace std;

class Service {
protected:
    string name;
    int duration;
    double basePrice;
    string time;
    string clientType;

public:
    // Constructor
    Service();
    Service(string name, int duration, double basePrice);
    
    // Setters
    void setTime(string time);
    void setClientType(string clientType);
    //Overloading
    void setAppointment(string time);
    void setAppointment(string time, string clientType);
    
    // Getters
    string getName();
    int getDuration();
    double getBasePrice();
    string getTime();
    string getClientType();
    
    // virtual metod
    virtual double calculatePrice() = 0;
    virtual void displaySummary() = 0;
};

#endif
