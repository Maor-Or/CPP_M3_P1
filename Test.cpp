
#include <iostream>
#include <stdexcept>
#include <string>
#include "doctest.h"
#include "sources/Fraction.hpp"


using namespace std;
using namespace ariel;

TEST_CASE("Test 1 - checking for valids and invalid initializations") {

    //valid initializations
    CHECK_NOTHROW(Fraction(1,1));     
    CHECK_NOTHROW(Fraction(0,1));     
    
    //invalid initializations
    CHECK_THROWS(Fraction(0,0)); 
    CHECK_THROWS(Fraction(1,0)); 
    
}

TEST_CASE("Test 2 - checking operands") {
    
    Fraction a(1,2), b(1,2),c(1,1);

    //Fractions with fractions:
    CHECK((a+b)==c);                // 1/2 + 1/2 = 1/1
    CHECK(c == Fraction(2,2));
    ++a;
    CHECK(a==Fraction(3,2));        // 1/2 + 2/2 = 3/2
    CHECK(a!=Fraction(2,3));
    b++;
    CHECK(b==Fraction(3,2));        // 1/2 + 2/2 = 3/2
    CHECK(b!=Fraction(2,3));

    a = (b-c);                      // a = 3/2 - 1/1 =1/2
    CHECK(a == Fraction(1,2));      // 1/3 / 2/3 = 3/6 = 1/2

    Fraction d(1,3),e(2,3);
    CHECK(d*e == Fraction(2,9));    //1/3 * 2/3 = 2/9
    CHECK(d/e == Fraction(1,2));

    //Fractions with ints:
    CHECK(c==1);                    // 1/1 = 1
    CHECK(d+e == 1);                // 1/3 +2/3 = 1
    d = Fraction(2,1);              // d = 2
    CHECK(1+c+2 == 4);              // 1 + 1/1 +2 = 4
    CHECK(1-c == 0);                // 1 - 1/1 = 0
    CHECK(c - 1 == 0);              // 1/1 - 1 = 0
    CHECK(3*d*2 == 12);             // 3 *2/1 *2 = 12
    
    //Fractions with doubles/floats:
    a = Fraction(5,2) /* 2.5 */; b = Fraction(1333,500); /* 2.666 */
    
    CHECK(a==2.5);                  // 5/2 = 2.5
    CHECK(b==2.666);                // 1333/500 = 2.666
    CHECK(0.2 + a + 2.6 == 5.3);    // 0.2 + 5/2 + 2.6 = 5.3
    CHECK(b - 0.1 == 2.566);        // 1333/500 - 0.1 = 2.566
    CHECK(a * 0.5 == 1.25);         // 5/2 * 0.5 = 1.25
    CHECK(3*d*2 == 12);             // 3 *2/1 *2 = 12

    
    //mixed:
    CHECK(3.5*(c+2) ==10.5);                // 3.5 * ((1/1)+2) = 10.5
    CHECK(c/2 == Fraction(1,4)+0.25);       // (1/1)/2 = 1/4 + 0.25
    CHECK(Fraction(1,2)==Fraction(2,4));    // 1/2 = 2/4
    ((c--)--);
    CHECK(c==-1);                       // 1/1 -1 -1 = -1
    CHECK(c == Fraction(-1,1));
}

