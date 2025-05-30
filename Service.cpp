#include"Service.h"

//Default constructor 
Service::Service(){
    name = "";
    duration = 0;
    basePrice = 0.0;
    time = "";
    clientType = "";
}

// Constructor 
Service::Service(string name, int duration, double basePrice) {
    this->name = name;
    this->duration = duration;
    this->basePrice = basePrice;
    this->time = "";
    this->clientType = "";
}

// Overloading
void Service::setAppointment(string time) {
    this->time = time;
}

void Service::setAppointment(string time, string clientType) {
    this->time = time;
    this->clientType = clientType;
}
void Service::setTime(string time) {
    this->time= time;
}

void Service::setClientType(string clientType) {
    this->clientType = clientType;
}

string Service::getName() {
    return name;
}

int Service::getDuration() {
    return duration;
}

double Service::getBasePrice() {
    return basePrice;
}

string Service::getTime() {
    return time;
}

string Service::getClientType() {
    return clientType;
}
