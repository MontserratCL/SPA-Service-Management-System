#include <iostream>
#include "TherapeuticMassage.h"
using namespace std;

int main() {
    // Message over 60 minutes 
    TherapeuticMassage massage1(75, 1400);
    massage1.setAppointment("3:00 PM");
    
    // message 1 
    cout << "Service: " << massage1.getName() << endl;
    cout << "Duration: " << massage1.getDuration() << " minutes" << endl;
    cout << "Base Price: $" << massage1.getBasePrice() << endl;
    cout << "Time: " << massage1.getTime() << endl;
    
    if (massage1.getDuration() > 60) {
        cout << "Note: Duration exceeds 60 minutes. Surcharge applied: $200" << endl;
    }
    
    cout << "Final Price: $" << massage1.calculatePrice() << endl;
    cout << "Booking Confirmed" << endl;
    cout << "=========================================" << endl;
    
    // Showing to clients
    TherapeuticMassage massage2(60, 1200);
    massage2.setAppointment("4:00 PM", "Returning Client");
    
    // message 2
    cout << "Service: " << massage2.getName() << endl;
    cout << "Duration: " << massage2.getDuration() << " minutes" << endl;
    cout << "Base Price: $" << massage2.getBasePrice() << endl;
    cout << "Time: " << massage2.getTime() << endl;
    
    if (!massage2.getClientType().empty()) {
        cout << "Client Type: " << massage2.getClientType() << endl;
    }
    
    if (massage2.getClientType() == "Returning Client") {
        cout << "Note: Returning client discount applied: 10%" << endl;
    }
    
    cout << "Final Price: $" << massage2.calculatePrice() << endl;
    cout << "Booking Confirmed" << endl;
    cout << "=========================================" << endl;
    
    return 0;
}
