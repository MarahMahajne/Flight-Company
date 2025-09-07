#ifndef CFLIGHTINFO_H
#define CFLIGHTINFO_H

#include <string>
#include <iostream>
using namespace std;

class CFlightInfo {
private:
    int flightNum;     // Flight number
    string dest;       // Destination
    int timeMinutes;   // Flight time in minutes
    int distanceKm;    // Flight distance in kilometers

public:
    // Constructor (requires all values, no default constructor)
    CFlightInfo(const string& d, int num, int time, int dist);

    // Copy constructor
    CFlightInfo(const CFlightInfo& other);

    // Destructor
    ~CFlightInfo();

    // Getters
    int GetFlightNum() const;        // Return flight number
    const string& GetDest() const;   // Return destination
    int GetTimeMinutes() const;      // Return flight time
    int GetDistanceKm() const;       // Return distance

    // Setters (with basic validation)
    void SetFlightNum(int num);
    void SetDest(const string& d);
    void SetTimeMinutes(int t);
    void SetDistanceKm(int d);

    // Compare two flights by flight number
    bool IsEqual(const CFlightInfo& other) const;

    // Print flight information
    void Print() const;
};

#endif
