#ifndef CFLIGHTCOMPANY_H
#define CFLIGHTCOMPANY_H

#include <string>
#include <iostream>
using namespace std;

class CFlightCompany {
private:
    string name;   // Company name

public:
    // Constructor (must provide a name, no default constructor)
    CFlightCompany(const string& n);

    // Copy constructor
    CFlightCompany(const CFlightCompany& other);

    // Destructor
    ~CFlightCompany();

    // Getter for company name
    const string& GetName() const;

    // Setter for company name (only if not empty)
    void SetName(const string& n);

    // Print details: "Flight company: <name>"
    void Print() const;
};

#endif
