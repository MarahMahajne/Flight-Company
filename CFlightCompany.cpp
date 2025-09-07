#include "FlightCompany.h"

// Constructor (initialize company with given name)
CFlightCompany::CFlightCompany(const string& n) : name(n) {}

// Copy constructor (create a new object as a copy of another)
CFlightCompany::CFlightCompany(const CFlightCompany& other)
    : name(other.name) {}

// Destructor (nothing special to release)
CFlightCompany::~CFlightCompany() {}

// Getter for company name
const string& CFlightCompany::GetName() const {
    return name;
}

// Setter for company name (only if string is not empty)
void CFlightCompany::SetName(const string& n) {
    if (!n.empty()) name = n;
}

// Print company details
void CFlightCompany::Print() const {
    cout << "Flight company: " << name << endl;
}
