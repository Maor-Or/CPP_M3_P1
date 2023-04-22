
#include <iostream>
#include "Fraction.hpp"

using namespace std;
using namespace ariel;

// constructors:
Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}
Fraction::Fraction(double num) : numerator(num * 1000), denominator(1000) {}
Fraction::Fraction(int num) : numerator(num), denominator(1) {}

// Fraction w/ Fraction oparations:
// Fraction Fraction::operator+(const Fraction &other) const { return Fraction(1, 1); }
// Fraction Fraction::operator-(const Fraction &other) const { return Fraction(1, 1); }
// Fraction Fraction::operator*(const Fraction &other) const
// {
//     return Fraction(numerator * other.numerator, denominator * other.denominator);
// }
// Fraction Fraction::operator/(const Fraction &other) { return other; }
// bool Fraction::operator==(const Fraction &other) { return true; }
// bool Fraction::operator!=(const Fraction &other) { return true; }
// bool Fraction::operator>(const Fraction &other) { return true; }
// bool Fraction::operator<(const Fraction &other) { return true; }
// bool Fraction::operator>=(const Fraction &other) { return true; }
// bool Fraction::operator<=(const Fraction &other) { return true; }

Fraction &Fraction::operator++(int) { return *this; } // postfix
Fraction &Fraction::operator++() { return *this; }    // prefix
Fraction &Fraction::operator--(int) { return *this; }
Fraction &Fraction::operator--() { return *this; }

// friend functions:
Fraction operator+(const Fraction &first, const Fraction &second){return Fraction(1,1);}
Fraction operator-(const Fraction &first, const Fraction &second){return Fraction(1,1);}
Fraction operator*(const Fraction &first, const Fraction &second){return Fraction(1,1);}
Fraction operator/(const Fraction &first, const Fraction &second){return Fraction(1,1);}
bool operator==(const Fraction &first, const Fraction &second){ return true; }
bool operator!=(const Fraction &first, const Fraction &second){ return true; }
bool operator>(const Fraction &first, const Fraction &second){ return true; }
bool operator<(const Fraction &first, const Fraction &second){ return true; }
bool operator>=(const Fraction &first, const Fraction &second) { return true; }
bool operator<=(const Fraction &first, const Fraction &second){ return true; }

ostream &operator<<(std::ostream &output, const Fraction &fracNum) { return output; }