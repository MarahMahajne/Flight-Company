#include "Address.h"

// ********** Constructor **********
// Builds a new CAddress object.
// Parameters: house number, street name, and city name (default is "Tel Aviv").
// Initialization list is used to set the values directly.
CAddress::CAddress(int house, const string& st, const string& c)
    : city(c), street(st), houseNum(house) {}

// ********** Copy Constructor **********
// Creates a new object as a copy of another CAddress object.
// Copies all the members (city, street, house number) from the other object.
CAddress::CAddress(const CAddress& other)
    : city(other.city), street(other.street), houseNum(other.houseNum) {}

// ********** Destructor **********
// Called automatically when an object is destroyed or goes out of scope.
// No dynamic memory is used here, so the body is empty,
// but it must be defined as per the project requirements.
CAddress::~CAddress() {}

// ********** Getters **********
// Functions that return the values of private members.
// Marked as const because they do not modify the object.
const string& CAddress::GetCity() const { return city; }
const string& CAddress::GetStreet() const { return street; }
int CAddress::GetHouseNum() const { return houseNum; }

// ********** Print **********
// Prints the address to the console in the format:
// "<street>  <houseNum>, <city>"
void CAddress::Print() const {
    cout << street << "  " << houseNum << ", " << city << endl;
}

// ********** UpdateAddress **********
// Updates the address details only if they are valid:
// - City name is not empty
// - Street name is not empty
// - House number is greater than 0
void CAddress::UpdateAddress(const string& c, const string& s, int h) {
    if (!c.empty()) city = c;
    if (!s.empty()) street = s;
    if (h > 0) houseNum = h;
}
