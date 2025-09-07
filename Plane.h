#ifndef CPLANE_H
#define CPLANE_H

#include <string>
#include <iostream>
using namespace std;

class CPlane {
private:
    int serial;   // Plane serial number
    string model; // Plane model name
    int seats;    // Number of seats

public:
    // Constructor (requires serial, seats, and model — no default ctor)
    CPlane(int srl, int sts, const string& mdl);

    // Copy constructor
    CPlane(const CPlane& other);

    // Destructor
    ~CPlane();

    // Getters
    int GetSerial() const;         // Return plane serial number
    const string& GetModel() const; // Return model name
    int GetSeats() const;          // Return number of seats

    // Print in format: "Plane <serial> degem <model> seats <seats>"
    void Print() const;

    // Compare planes by serial number
    bool IsEqual(const CPlane& other) const;
};

#endif
