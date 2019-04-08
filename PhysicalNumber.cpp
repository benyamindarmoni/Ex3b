#include <iostream>

#include "PhysicalNumber.h"
using namespace ariel;
using namespace std;

bool PhysicalNumber::operator==(const PhysicalNumber& rhs)
{
   double a=value;
    double b=rhs.value;
    if(samefamily(rhs)){
        if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;
        if(unit==3)a=a\120;
        if(unit==4)a=a\60;
        if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000;
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
        if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
        if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
        if(a==b)return true;
    }
    return false;
    
}
double PhysicalNumber:: changesize( PhysicalNumber& lhs,PhysicalNumber& rhs){
    
  
return 0;   
}
int PhysicalNumber:: samefamily  (const PhysicalNumber& rhs){
    if(unit>=0&&unit<=2&&rhs.unit>=0&&rhs.unit<=2)return 1;
  
   else if(unit>=3&&unit<=5&&rhs.unit>=3&&rhs.unit<=5)return 2;
      else if(unit>=6&&unit<=8&&rhs.unit>=6&&rhs.unit<=8)return 3;
    else
       return 0;
}
bool PhysicalNumber::operator!=(const PhysicalNumber& rhs)
{
      if(*this==rhs)return false;
   return true;
}
bool PhysicalNumber::operator<(const PhysicalNumber& rhs)
{
     double a=value;
    double b=rhs.value;
    if(samefamily(rhs)){
        if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;
        if(unit==3)a=a\120;
        if(unit==4)a=a\60;
        if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000;
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
        if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
        if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
        if(a<b)return true;
    }
    return false;
}
bool PhysicalNumber::operator>(const PhysicalNumber& rhs)
{
     double a=value;
    double b=rhs.value;
    if(samefamily(rhs)){
        if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;
        if(unit==3)a=a\120;
        if(unit==4)a=a\60;
        if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000;
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
        if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
        if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
        if(a>b)return true;
    }
    return false;
}
bool PhysicalNumber::operator<=(const PhysicalNumber& rhs)
{
     double a=value;
    double b=rhs.value;
    if(samefamily(rhs)){
        if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;
        if(unit==3)a=a\120;
        if(unit==4)a=a\60;
        if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000;
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
        if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
        if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
        if(a<=b)return true;
    }
    return false;
}
bool PhysicalNumber::operator>=(const PhysicalNumber& rhs)
{
    double a=value;
    double b=rhs.value;
    if(samefamily(rhs)){
        if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;
        if(unit==3)a=a\120;
        if(unit==4)a=a\60;
        if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000;
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
        if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
        if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
        if(a>=b)return true;
    }
    return false;
}
PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& rhs)
{
   double a=value;
    double b=rhs.value;
    if(samefamily(rhs)){
        if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;
        if(unit==3)a=a\120;
        if(unit==4)a=a\60;
        if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000;
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
        if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
        if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
        if(a>=b)
    
    }
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







