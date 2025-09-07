#ifndef CADDRESS_H
#define CADDRESS_H

#include <string>
#include <iostream>
using namespace std;

class CAddress {
private:
    string city;    // City name
    string street;  // Street name
    int houseNum;   // House number

public:
    // Constructor (default city = "Tel Aviv")
    CAddress(int house, const string& st, const string& c = "Tel Aviv");

    // Copy constructor
    CAddress(const CAddress& other);

    // Destructor
    ~CAddress();

    // Getters
    const string& GetCity() const;   // Return city
    const string& GetStreet() const; // Return street
    int GetHouseNum() const;         // Return house number

    // Print address
    void Print() const;

    // Update address values
    void UpdateAddress(const string& c, const string& s, int h);
};

#endif
