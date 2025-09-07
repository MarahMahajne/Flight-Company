#include "CrewMember.h"

// Constructor (initialize with name, address, and optional minutes)
CCrewMember::CCrewMember(const string& n, const CAddress& addr, int minutes)
    : name(n), airMinutes(minutes >= 0 ? minutes : 0), address(addr) {}

// Copy Constructor
CCrewMember::CCrewMember(const CCrewMember& other)
    : name(other.name), airMinutes(other.airMinutes), address(other.address) {}

// Destructor
CCrewMember::~CCrewMember() {}

// Update minutes
bool CCrewMember::UpdateMinutes(int add) {
    if (add <= 0) return false;
    airMinutes += add;
    return true;
}

// Get name
const string& CCrewMember::GetName() const { return name; }

// Set name
void CCrewMember::SetName(const string& n) { if (!n.empty()) name = n; }

// Get address
const CAddress& CCrewMember::GetAddress() const { return address; }

// Set adress
void CCrewMember::SetAddress(const CAddress& addr) { address = addr; }

// Get total air minutes
int CCrewMember::GetAirMinutes() const { return airMinutes; }

// Print crew member info
void CCrewMember::Print() const {
    cout << "Crewmember " << name << " minutes " << airMinutes << endl;
}

// Compare crew members by name
bool CCrewMember::IsEqual(const CCrewMember& other) const {
    return name == other.name;
}
