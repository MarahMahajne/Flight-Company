#ifndef CCREWMEMBER_H
#define CCREWMEMBER_H

#include <string>
#include <iostream>
using namespace std;

#include "Address.h"   // Crew member has an address

class CCrewMember {
private:
    string name;        // Crew member name
    int airMinutes;     // Total accumulated air minutes
    CAddress address;   // Crew member address

public:
    // Constructor (initialize with name, address, and optional minutes = 0)
    CCrewMember(const string& n, const CAddress& addr, int minutes = 0);

    // Copy constructor
    CCrewMember(const CCrewMember& other);

    // Destructor
    ~CCrewMember();

    // Add minutes to total; return false if value is invalid (<= 0)
    bool UpdateMinutes(int add);

    // Get/Set name
    const string& GetName() const;
    void SetName(const string& n);

    // Get/Set address
    const CAddress& GetAddress() const;
    void SetAddress(const CAddress& addr);

    // Get total air minutes
    int GetAirMinutes() const;

    // Print info: "Crewmember <name> minutes <minutes>"
    void Print() const;

    // Compare two crew members by name
    bool IsEqual(const CCrewMember& other) const;
};

#endif
