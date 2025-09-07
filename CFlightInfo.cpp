#include "FlightInfo.h"

// Constructor (initialize with destination, flight number, time, and distance)
CFlightInfo::CFlightInfo(const string& d, int num, int time, int dist)
    : flightNum(num), dest(d), timeMinutes(time), distanceKm(dist) {}

// Copy constructor (copy all members from another object)
CFlightInfo::CFlightInfo(const CFlightInfo& other)
    : flightNum(other.flightNum),
    dest(other.dest),
    timeMinutes(other.timeMinutes),
    distanceKm(other.distanceKm) {}

// Destructor (no dynamic memory to release)
CFlightInfo::~CFlightInfo() {}

// Getters (return values of private members)

// Get Flight Num
int CFlightInfo::GetFlightNum() const 
{ 
    return flightNum; 
}

// Get destnation
const string& CFlightInfo::GetDest() const 
{ 
    return dest; 
}

// Get Time Minutes
int CFlightInfo::GetTimeMinutes() const 
{ 
    return timeMinutes; 
}

// Get Distance in Km
int CFlightInfo::GetDistanceKm() const 
{
    return distanceKm; 
}

// Setters (update values only if valid)

// Set Flight Num
void CFlightInfo::SetFlightNum(int num) 
{ 
    if (num > 0) flightNum = num; 
}

// Set destnition
void CFlightInfo::SetDest(const string& d) 
{ 
    if (!d.empty()) dest = d; 
}


// Set Time Minutes
void CFlightInfo::SetTimeMinutes(int t) 
{
    if (t > 0) timeMinutes = t; 
}

// Set Distance Km
void CFlightInfo::SetDistanceKm(int d) 
{ 
    if (d > 0) distanceKm = d; 
}

// Compare two flights by flight number
bool CFlightInfo::IsEqual(const CFlightInfo& other) const 
{
    return flightNum == other.flightNum;
}

// Print flight info in the required format
void CFlightInfo::Print() const {
    cout << "Flight Info dest: " << dest
        << " Number " << flightNum
        << " minutes " << timeMinutes
        << " KM " << distanceKm << endl;
}
