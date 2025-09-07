#include "Plane.h"

// Constructor (initialize with serial number, seats, and model name)
CPlane::CPlane(int srl, int sts, const string& mdl)
    : serial(srl), model(mdl), seats(sts) {}

// Copy constructor (copy all members from another plane)
CPlane::CPlane(const CPlane& other)
    : serial(other.serial), model(other.model), seats(other.seats) {}

// Destructor (no dynamic memory to release)
CPlane::~CPlane() {}

// Getters
int CPlane::GetSerial() const { return serial; }        // Return plane serial number
const string& CPlane::GetModel() const { return model; } // Return model name
int CPlane::GetSeats() const { return seats; }           // Return number of seats

// Print plane information in required format
void CPlane::Print() const {
    cout << "Plane " << serial << " degem " << model << " seats " << seats << endl;
}

// Compare planes by serial number
bool CPlane::IsEqual(const CPlane& other) const {
    return serial == other.serial;
}
