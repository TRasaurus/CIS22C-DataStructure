//  Element.h
//  Team project
//
//  Created by Tatiana Karminskaya on 5/22/14.



#ifndef Team_project_Element_h
#define Team_project_Element_h

#include <iomanip>
#include <iostream>
using namespace std;

class Element
{
private:
    string name;       // Name of the star in constellation
    string name2;      // Usual name of the star
    float VisM;        // Visual magnitude
    float AbsM;        // Absolute magnitude
    int Distance;      // Distance, in light years
    string SpT;        // Spectral type (will be converted to color below)
    float Dec;         // Equatorial coordinate, Declination, in degrees
    float RAs;         // Equatorial coordinate, Right ascension, in degrees
   

    
public:
    //accessors
    string get_name() const {return name;};
    string get_name2() const {return name2;};
    float get_VisM() const {return VisM;};
    float get_AbsM() const {return AbsM;};
    int get_Distance() const {return Distance;};
    string get_SpT() const {return SpT;};
    float get_Dec() const {return Dec;};
    float get_RAs() const {return Dec;};
    //mutators
    void set_name(string n){name = n;};
    void set_name2(string n2){name2 = n2;};
    void set_VisM(float V){VisM = V;};
    void set_Distance(int D){Distance = D;};
    void set_SpT(string S){SpT = S;};
    void set_Dec(float De){Dec = De;};
    void set_RAs(float Ra){RAs = Ra;};
    
    //Overloaded operators
    bool operator>(const Element& s) const {return Distance > s.get_Distance();};
	bool operator<(const Element& s) const {return Distance < s.get_Distance();};
	bool operator==(const Element& s) const {return Distance == s.get_Distance();};
    
    //print everithing excluding Equatorial coordinates
	void print() {cout << left << setw(23) << name << setw(23) << name2 << setw(10) << VisM << setw(10) << AbsM << setw(10) << SpT << setw(10) << Distance << endl;};
};




#endif
