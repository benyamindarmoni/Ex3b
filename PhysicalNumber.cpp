#include <iostream>

#include "PhysicalNumber.h"
using namespace ariel;
using namespace std;

bool PhysicalNumber::operator==(const PhysicalNumber& rhs)
{
    return false;
}
bool PhysicalNumber::operator!=(const PhysicalNumber& rhs)
{
    return false;
}
bool PhysicalNumber::operator<(const PhysicalNumber& rhs)
{
    return false;
}
bool PhysicalNumber::operator>(const PhysicalNumber& rhs)
{
    return false;
}
bool PhysicalNumber::operator<=(const PhysicalNumber& rhs)
{
    return false;
}
bool PhysicalNumber::operator>=(const PhysicalNumber& rhs)
{
    return false;
}
PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& rhs)
{
    return *this;
}
PhysicalNumber& PhysicalNumber::operator-=(PhysicalNumber& rhs)
{
    return *this;
}

PhysicalNumber& PhysicalNumber::operator+(const PhysicalNumber& rhs)
{
    return *this;
}
PhysicalNumber& PhysicalNumber::operator-(const PhysicalNumber& rhs)
{
    return *this;
}
PhysicalNumber& PhysicalNumber::operator-()
{
    return *this;
}
PhysicalNumber& PhysicalNumber::operator+()
{
    return *this;
}
PhysicalNumber& PhysicalNumber::operator++()
{
    return *this;
}
PhysicalNumber& PhysicalNumber::operator--()
{
    return *this;
}

std::istream& ariel::operator>>(std::istream& in, const PhysicalNumber& a)
{
       return in;
}
 ostream& ariel::operator<<(ostream& out, const ariel::PhysicalNumber& a)
{
    int b=(int)a.unit;
    string unitName="";
    switch (b)
      { 
         case 0: unitName="m"; break;
         case 1: unitName="km";break;
         case 2: unitName="cm";break;
         case 3: unitName="sec";break;
         case 4: unitName="min";break;
         case 5: unitName="hour";break;
         case 6: unitName="g";break;
         case 7: unitName="kg";break;
         case 8: unitName="ton";break;
       }

        
     out<<a.value<<"["<<unitName<<"]";
     return out;
   }







