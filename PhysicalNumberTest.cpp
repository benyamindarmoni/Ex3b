
#include <iostream>
#include <sstream>
using std::cout, std::endl, std::istringstream;
#include "PhysicalNumber.h"
using ariel::PhysicalNumber, ariel::Unit;
#include "badkan.hpp"

int main() {
  badkan::TestCase testcase;
  int grade=0;
  int signal = setjmp(badkan::longjmp_buffer);
  if (signal == 0) {

    // BASIC TESTS - DO NOT CHANGE
    PhysicalNumber a(2, Unit::KM);
    PhysicalNumber b(300, Unit::M);
    PhysicalNumber c(2, Unit::HOUR);
    PhysicalNumber d(30, Unit::MIN);
   //my factors
   PhysicalNumber x(20, Unit::TON);
      PhysicalNumber y(45, Unit::KG);
      PhysicalNumber z(22, Unit::G);
    testcase
    .setname("Basic output")
    .CHECK_OUTPUT(a, "2[km]")
    .CHECK_OUTPUT(b, "300[m]")

    .setname("Compatible dimensions")
    .CHECK_OUTPUT(b+a, "2300[m]")
    .CHECK_OUTPUT((a+=b), "2.3[km]")
    .CHECK_OUTPUT(a, "2.3[km]")
    .CHECK_OUTPUT(a+a, "4.6[km]")
    .CHECK_OUTPUT(b-b, "0[m]")
    .CHECK_OUTPUT(c, "2[hour]")
    .CHECK_OUTPUT(d, "30[min]")
    .CHECK_OUTPUT(d+c, "150[min]")

    .setname("Incompatible dimensions")
    .CHECK_THROWS(a+c)
    .CHECK_THROWS(a+d)
    .CHECK_THROWS(b+c)
    .CHECK_THROWS(b+d)

    .setname("Basic input")
    .CHECK_OK(istringstream("700[kg]") >> a)
    .CHECK_OUTPUT((a += PhysicalNumber(1, Unit::TON)), "1700[kg]")

    // YOUR TESTS - INSERT AS MANY AS YOU WANT
 .setname("myTest")
     .CHECK_OUTPUT(x, "20[TON]")
      .CHECK_OUTPUT(y, "45[KG]")
       .CHECK_OUTPUT(z, "22[G]")
      
      .CHECK_THROWS(x+b)
       .CHECK_THROWS(y+d)
        .CHECK_THROWS(z+d)
         .CHECK_THROWS(y+c)
       .CHECK_THROWS(z+b)
       .CHECK_THROWS(z>b) .CHECK_THROWS(z<b) .CHECK_THROWS(z==b) .CHECK_THROWS(z+=b)
      
      
        .CHECK_OUTPUT(x++, "21[TON]")
        .CHECK_OUTPUT(y++, "46[KG]")
        .CHECK_OUTPUT(z++, "23[G]")
        .CHECK_OUTPUT(x+y, "21046[TON]")
       .CHECK_OUTPUT(z+y, "46023[G]")
       .CHECK_OUTPUT(y--, "45[KG]")
      
      .CHECK_EQUAL(y>=y,true)   
      .CHECK_EQUAL(y>x, false)
       .CHECK_EQUAL(x>=y, true)
       .CHECK_EQUAL(z>=y, false)
       .CHECK_EQUAL(x>=z, true)
       .CHECK_EQUAL(z<y, true)
         .CHECK_EQUAL(x==x,true) 
       .CHECK_EQUAL(z==y, false)
     
    
         
         .CHECK_OUTPUT((x+=y), "21.046[TON]")
         .CHECK_OUTPUT((z+=y), "46023[G]")
             .CHECK_OUTPUT((y+=x), "21092[KG]")
              .CHECK_OUTPUT((x-=z), "20.999977[TON]")
           .CHECK_OUTPUT((y-=z), "21045.977[KG]")
          
             .CHECK_EQUAL(y==x, true)
            .CHECK_EQUAL(y==z, true)
           /*   */ 
         
        
      .print(cout, /*show_grade=*/false);
      grade = testcase.grade();
    } else {
      testcase.print_signal(signal);
      grade = 0;
    }
    cout <<  "*** Grade: " << grade << " ***" << endl;
    return grade;
}
