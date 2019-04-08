#include <iostream>

#include "PhysicalNumber.h"
using namespace ariel;
using namespace std;

bool PhysicalNumber::operator==(const PhysicalNumber& rhs)
{
   double a=value;
    double b=rhs.value;
    if(samefamily(rhs)){
        if(unit==0)a=a\1000;
        if(unit==0)a=a\1000;
        if(unit==0)a=a\1000;
        if(unit==0)a=a\1000;
        if(unit==0)a=a\1000;
        
    }
    return false;
    
}
bool PhysicalNumber:: samefamily  (const PhysicalNumber& rhs){
    if(unit>=0&&unit<=2&&rhs.unit>=0&&rhs.unit<=2||unit>=3&&unit<=5&&rhs.unit>=3&&rhs.unit<=5||
       unit>=6&&unit<=8&&rhs.unit>=6&&rhs.unit<=8)return true;
    return false;
}
bool PhysicalNumber::operator!=(const PhysicalNumber& rhs)
{
       if(!samefamily(rhs))return true;
    return false;
}
bool PhysicalNumber::operator<(const PhysicalNumber& rhs)
{
    if(samefamily(rhs)){
        
    }
    else
        return false;
}
bool PhysicalNumber::operator>(const PhysicalNumber& rhs)
{
    if(samefamily(rhs)){
        
    }
   else
       return false;
}
bool PhysicalNumber::operator<=(const PhysicalNumber& rhs)
{
    if(samefamily(rhs)){
        
    }
    else
    return false;
}
bool PhysicalNumber::operator>=(const PhysicalNumber& rhs)
{
    if(samefamily(rhs)){
        
    }
    else
    return false;
}
PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& rhs)
{if(samefamily(rhs)){
        return *this; 
    }
    else
 throw std::invalid_argument( "NOT THE SAME DIMENSION!" );  
}
PhysicalNumber& PhysicalNumber::operator-=(PhysicalNumber& rhs)
{
    if(samefamily(rhs)){
        return *this; 
    }
    else
 throw std::invalid_argument( "NOT THE SAME DIMENSION!" );  
 
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
    value++;
    return *this;
}
PhysicalNumber& PhysicalNumber::operator--()
{
    value--;
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







