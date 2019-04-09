#include <iostream>

#include "PhysicalNumber.h"
using namespace ariel;
using namespace std;

bool PhysicalNumber::operator==(const PhysicalNumber& rhs)
{
   int family=samefamily(rhs);
   double a=value;
    double b=rhs.value;
    if(family!=0){
      if(family==1){
         if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;  
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
      }
       else if(family==2){
          if(unit==3)a=a\120;
        if(unit==4)a=a\60; 
          if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
       }
       else {
          if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000; 
          if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
       }

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
     int family=samefamily(rhs);
   double a=value;
    double b=rhs.value;
    if(family!=0){
      if(family==1){
         if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;  
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
      }
       else if(family==2){
          if(unit==3)a=a\120;
        if(unit==4)a=a\60; 
          if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
       }
       else {
          if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000; 
          if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
       }

        if(a<b)return true;
    }
    return false;
    
}
bool PhysicalNumber::operator>(const PhysicalNumber& rhs)
{
     int family=samefamily(rhs);
   double a=value;
    double b=rhs.value;
    if(family!=0){
      if(family==1){
         if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;  
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
      }
       else if(family==2){
          if(unit==3)a=a\120;
        if(unit==4)a=a\60; 
          if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
       }
       else {
          if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000; 
          if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
       }

        if(a>b)return true;
    }
    return false;
    
}
bool PhysicalNumber::operator<=(const PhysicalNumber& rhs)
{
      int family=samefamily(rhs);
   double a=value;
    double b=rhs.value;
    if(family!=0){
      if(family==1){
         if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;  
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
      }
       else if(family==2){
          if(unit==3)a=a\120;
        if(unit==4)a=a\60; 
          if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
       }
       else {
          if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000; 
          if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
       }

        if(a<=b)return true;
    }
    return false;
    
}
bool PhysicalNumber::operator>=(const PhysicalNumber& rhs)
{
     int family=samefamily(rhs);
   double a=value;
    double b=rhs.value;
    if(family!=0){
      if(family==1){
         if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;  
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
      }
       else if(family==2){
          if(unit==3)a=a\120;
        if(unit==4)a=a\60; 
          if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
       }
       else {
          if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000; 
          if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
       }

        if(a>=b)return true;
    }
    return false;
    
}
PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& rhs)
{
 
    int family=samefamily(rhs);
   double a=value;
    double b=rhs.value;
    if(family!=0){
      if(family==1){
         if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;  
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
         a+=b;
         value=a;
         if(unit==0)
         {
            value=a*100000;
         }
         if(unit==1)
         {
              value=a*1000;
         }
         return *this;
      }
       else if(family==2){
          if(unit==3)a=a\120;
        if(unit==4)a=a\60; 
          if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
           a+=b;
          value=a;
          if(unit==3)
          {
             value=a*120;
          }
          if(unit==4)
          {
             value=a*60;
          }
          return *this;
       }
       else {
          if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000; 
          if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
           a+=b;
          value=a;
          if(unit==6)
          {
             value=a*1000000;
          }
          if(unit==7)
          {
             value=a*1000;
          }
          return *this;
       }    
    } 
   throw std::invalid_argument( "NOT THE SAME DIMENSION!" );  
}
PhysicalNumber& PhysicalNumber::operator-=(PhysicalNumber& rhs)
{
     int family=samefamily(rhs);
   double a=value;
    double b=rhs.value;
    if(family!=0){
      if(family==1){
         if(unit==0)a=a\100000;
        if(unit==1)a=a\1000;  
         if(rhs.unit==0)b=b\100000;
        if(rhs.unit==1)b=b\1000;
         a-=b;
         value=a;
         if(unit==0)
         {
            value=a*100000;
         }
         if(unit==1)
         {
              value=a*1000;
         }
         return *this;
      }
       else if(family==2){
          if(unit==3)a=a\120;
        if(unit==4)a=a\60; 
          if(rhs.unit==3)b=b\120;
        if(rhs.unit==4)b=b\60;
           a-=b;
          value=a;
          if(unit==3)
          {
             value=a*120;
          }
          if(unit==4)
          {
             value=a*60;
          }
          return *this;
       }
       else {
          if(unit==6)a=a\1000000;
        if(unit==7)a=a\1000; 
          if(rhs.unit==6)b=b\1000000;
        if(rhs.unit==7)b=b\1000;
           a-=b;
          value=a;
          if(unit==6)
          {
             value=a*1000000;
          }
          if(unit==7)
          {
             value=a*1000;
          }
          return *this;
       }    
    } 
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







