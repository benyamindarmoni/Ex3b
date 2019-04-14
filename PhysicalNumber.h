#pragma once

#include "Unit.h"

#include <iostream>

using namespace std;

namespace ariel

{

    class PhysicalNumber

    {

    public:

        double value;

        Unit unit;
        PhysicalNumber(const PhysicalNumber &a)
        {
            this->value=a.value;
            this->unit=a.unit;
        }

        PhysicalNumber(double num, Unit type):value(num),unit(type)

        {

            value=num;

            unit=type;

        }

        //boolean

        bool operator==(const PhysicalNumber& rhs);

        bool operator!=(const PhysicalNumber& rhs);

        bool operator<(const PhysicalNumber& rhs);

        bool operator>(const PhysicalNumber& rhs);

        bool operator<=(const PhysicalNumber& rhs);

        bool operator>=(const PhysicalNumber& rhs);

        int  samefamily  (const PhysicalNumber& rhs);

        //+=,-=,+,-

        PhysicalNumber &operator+=(const PhysicalNumber& rhs);

        PhysicalNumber &operator-=(const PhysicalNumber& rhs);

        PhysicalNumber& operator+(const PhysicalNumber& rhs);

        PhysicalNumber& operator-(const PhysicalNumber& rhs);

        //onary

        PhysicalNumber operator-();

        PhysicalNumber& operator+();

        //++,--

        PhysicalNumber& operator++(int);

        PhysicalNumber& operator++();

        PhysicalNumber& operator--(int);

        PhysicalNumber& operator--();

        void convert(double& ,double& ,int ,const PhysicalNumber& );

        //stream
    PhysicalNumber& help(double ,int);
        friend istream& operator>>(istream& in,  PhysicalNumber& a);

        friend ostream& operator<<(ostream& out, const PhysicalNumber& a);


    };



}
