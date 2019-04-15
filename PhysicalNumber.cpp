#include <iostream>

//#include "badkan.hpp"

#include "PhysicalNumber.h"

using namespace ariel;

using namespace std;

#include "Unit.h"

#include <stdexcept>
#include <stdlib.h>
#include <iomanip>

int PhysicalNumber:: samefamily  (const PhysicalNumber& rhs)
{
    if((int)unit>=0&&(int)unit<=2&&(int)rhs.unit>=0&&(int)rhs.unit<=2)
        return 1;
    else if((int)unit>=3&&(int)unit<=5&&(int)rhs.unit>=3&&(int)rhs.unit<=5)
        return 2;
    else if((int)unit>=6&&(int)unit<=8&&(int)rhs.unit>=6&&(int)rhs.unit<=8)
        return 3;
    else
        return 0;
}

void PhysicalNumber:: convert(double& a,double& b,int family,const PhysicalNumber& rhs){
    if(family==1)
    {
        if(unit==Unit::CM)
            a=a/100000;
        if(unit==Unit::M)
            a=a/1000;
        if(rhs.unit==Unit::CM)
            b=b/100000;
        if(rhs.unit==Unit::M)
            b=b/1000;
    }

    else if(family==2)
    {
        if(unit==Unit::SEC)
            a=a/3600;
        if(unit==Unit::MIN)
            a=a/60;
        if(rhs.unit==Unit::SEC)
            b=b/3600;
        if(rhs.unit==Unit::MIN)
            b=b/60;
    }
    else
    {
        if(unit==Unit::G)a=a/1000000;
        if(unit==Unit::KG)a=a/1000;
        if(rhs.unit==Unit::G)b=b/1000000;
        if(rhs.unit==Unit::KG)b=b/1000;
    }
}

bool PhysicalNumber::operator==(const PhysicalNumber& rhs)
{
    int family=samefamily(rhs);
    if(family==0)
        throw std::invalid_argument( "not the same dimension!" );
    double a=value;
    double b=rhs.value;
    convert(a,b,family,rhs);
    if(a==b)
        return true;
    return false;
}

bool PhysicalNumber::operator!=(const PhysicalNumber& rhs)
{
    if(*this==rhs)
        return false;
    return true;
}

bool PhysicalNumber::operator<(const PhysicalNumber& rhs)
{
    int family=samefamily(rhs);
    if(family==0)
        throw std::invalid_argument( "not the same dimention!" );
    double a=value;
    double b=rhs.value;
    convert(a,b,family,rhs);
    if(a<b)
        return true;
    return false;
}

bool PhysicalNumber::operator>(const PhysicalNumber& rhs)
{
    int family=samefamily(rhs);
    if(family==0) throw std::invalid_argument( "not the same dimention!" );
    double a=value;
    double b=rhs.value;
    convert(a,b,family,rhs);
    if(a>b)
        return true;
    return false;
}

bool PhysicalNumber::operator<=(const PhysicalNumber& rhs)
{
    int family=samefamily(rhs);
    if(family==0) throw std::invalid_argument( "not the same dimention!" );
    double a=value;
    double b=rhs.value;
    convert(a,b,family,rhs);
    if(a<=b)return true;
    return false;
}

bool PhysicalNumber::operator>=(const PhysicalNumber& rhs)

{
    int family=samefamily(rhs);
    if(family==0) throw std::invalid_argument( "not the same dimention!" );
    double a=value;
    double b=rhs.value;
    convert(a,b,family,rhs);
    if(a>=b)return true;
    return false;
}

PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& rhs)
{
    int family=samefamily(rhs);
    double a=value;
    double b=rhs.value;
    if(family!=0){
        if(family==1){
            if((int)unit==0)a=a/100000;
            if((int)unit==1)a=a/1000;
            if((int)rhs.unit==0)b=b/100000;
            if((int)rhs.unit==1)b=b/1000;
            a+=b;
            value=a;
            if((int)unit==0)
            {
                value=a*100000;
            }
            if((int)unit==1)
            {
                value=a*1000;
            }
            return *this;
        }
        else if(family==2){
            if((int)unit==3)
                a=a/3600;
            if((int)unit==4)
                a=a/60;
            if((int)rhs.unit==3)
                b=b/3600;
            if((int)rhs.unit==4)
                b=b/60;
            a+=b;
            value=a;
            if((int)unit==3)
            {
                value=a*3600;
            }
            if((int)unit==4)
            {
                value=a*60;
            }
            return *this;
        }
        else
        {
            if((int)unit==6)
                a=a/1000000;
            if((int)unit==7)
                a=a/1000;
            if((int)rhs.unit==6)
                b=b/1000000;
            if((int)rhs.unit==7)
                b=b/1000;
            a+=b;
            value=a;
            if((int)unit==6)
            {
                value=a*1000000;
            }
            if((int)unit==7)
            {
                value=a*1000;
            }
            return *this;
        }
    }

    throw std::invalid_argument( "not the same dimention!" );
}
PhysicalNumber& PhysicalNumber::operator-=(const PhysicalNumber& rhs)

{

    int family=samefamily(rhs);

    double a=value;

    double b=rhs.value;

    if(family!=0){

        if(family==1){

            if((int)unit==0)a=a/100000;

            if((int)unit==1)a=a/1000;

            if((int)rhs.unit==0)b=b/100000;

            if((int)rhs.unit==1)b=b/1000;

            a-=b;

            value=a;

            if((int)unit==0)

            {

                value=a*100000;

            }

            if((int)unit==1)

            {

                value=a*1000;

            }

            return *this;

        }

        else if(family==2){

            if((int)unit==3)a=a/3600;

            if((int)unit==4)a=a/60;

            if((int)rhs.unit==3)b=b/3600;

            if((int)rhs.unit==4)b=b/60;

            a-=b;

            value=a;

            if((int)unit==3)

            {

                value=a*3600;

            }

            if((int)unit==4)

            {

                value=a*60;

            }

            return *this;

        }

        else {

            if((int)unit==6)a=a/1000000;

            if((int)unit==7)a=a/1000;

            if((int)rhs.unit==6)b=b/1000000;

            if((int)rhs.unit==7)b=b/1000;

            a-=b;

            value=a;

            if((int)unit==6)

            {

                value=a*1000000;

            }

            if((int)unit==7)

            {

                value=a*1000;

            }

            return *this;

        }

    }

    throw std::invalid_argument( "not the same dimention!" );

}



PhysicalNumber& PhysicalNumber::operator+(const PhysicalNumber& rhs)

{
    if(samefamily(rhs)==0)
        throw std::invalid_argument( "NOT THE SAME DIMENSION!" );
    else
    {
        PhysicalNumber* help=new PhysicalNumber(0,unit);
        *help+=*this;
        *help+=rhs;
        return *help;
    }
}

PhysicalNumber& PhysicalNumber::operator-(const PhysicalNumber& rhs)

{
    if(samefamily(rhs)==0)
        throw std::invalid_argument( "NOT THE SAME DIMENSION!" );
    PhysicalNumber* help=new PhysicalNumber (0,unit);
    *help+=*this;
    *help-=rhs;
    return  *help;
}

PhysicalNumber PhysicalNumber::operator-()

{
    return PhysicalNumber(((this->value)*(-1)),this->unit);
}

PhysicalNumber PhysicalNumber::operator+()

{
    return PhysicalNumber(this->value, this->unit);
}

PhysicalNumber& PhysicalNumber::operator++(int)//postfix

{

    PhysicalNumber* temp = new PhysicalNumber(value,unit);

    ++*this;

    return *temp;

}

PhysicalNumber& PhysicalNumber::operator++()//prefix

{
    value++;

    return *this;

}

PhysicalNumber& PhysicalNumber::operator--(int)//postfix

{

    PhysicalNumber* temp = new PhysicalNumber(value,unit);

    --*this;

    return *temp;
}



PhysicalNumber& PhysicalNumber::operator--()//prefix

{
    value--;

    return *this;
}





istream& ariel::operator>>(istream &in, ariel::PhysicalNumber &a)
{
    string temp1, value1;
    int posStart=0;
    int posEnd=0;
    in>>temp1;
    posStart=temp1.find('[');
    posEnd=temp1.find(']');
    if((posStart<=0) || (posEnd!=temp1.length()-1) || (posStart+1==posEnd)|| (posEnd<0))
        return in;
    else {
        value1 = temp1.substr(0, posStart);
        
        temp1 = temp1.substr(posStart + 1, temp1.length() - 2 - posStart);
        if ((temp1 == "cm") || (temp1 == "CM"))
            a.unit = Unit::CM;
        else if ((temp1 == "m") || (temp1 == "M"))
            a.unit = Unit::M;
        else if ((temp1 == "km") || (temp1 == "KM"))
            a.unit = Unit::KM;
        else if ((temp1 == "sec") || (temp1 == "SEC"))
            a.unit = Unit::SEC;
        else if ((temp1 == "min") || (temp1 == "MIN"))
            a.unit = Unit::MIN;
        else if ((temp1 == "hour") || (temp1 == "HOUR"))
            a.unit = Unit::HOUR;
        else if ((temp1 == "g") || (temp1 == "G"))
            a.unit = Unit::G;
        else if ((temp1 == "kg") || (temp1 == "KG"))
            a.unit = Unit::KG;
        else if ((temp1 == "ton") || (temp1 == "TON"))
            a.unit = Unit::TON;
        else
            return in;
    }
    a.value = stod(value1);
    return in;

}


ostream& ariel::operator<<(ostream &out, const PhysicalNumber &a) {



    int b=(int)a.unit;

    string unitName="";

    switch (b)

    {

        case 0: unitName="cm"; break;

        case 1: unitName="m";break;

        case 2: unitName="km";break;

        case 3: unitName="sec";break;

        case 4: unitName="min";break;

        case 5: unitName="hour";break;

        case 6: unitName="g";break;

        case 7: unitName="kg";break;

        case 8: unitName="ton";break;

    }





    out<<setprecision(6)<<a.value<<"["<<unitName<<"]";

    return out;

}
