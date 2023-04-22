#pragma once

#include <string>
#include <iostream>

using namespace std;

class Fraction
{
    // private:
    int numerator, denominator;

public:
    // constructors:
    Fraction(int numerator, int denominator);
    Fraction(double num);
    Fraction(int num);

    // Fraction w/ Fraction oparations:
    // Fraction operator+(const Fraction &other) const;
    // Fraction operator-(const Fraction &other) const;
    // Fraction operator*(const Fraction &other) const;
    // Fraction operator/(const Fraction &other);
    // bool operator==(const Fraction &other);
    // bool operator!=(const Fraction &other);
    // bool operator>(const Fraction &other);
    // bool operator<(const Fraction &other);
    // bool operator>=(const Fraction &other);
    // bool operator<=(const Fraction &other);

    Fraction &operator++(int); // postfix
    Fraction &operator++();    // prefix
    Fraction &operator--(int);
    Fraction &operator--();

    //friend functions:
    friend Fraction operator+(const Fraction &first, const Fraction &second);
    friend Fraction operator-(const Fraction &first, const Fraction &second);
    friend Fraction operator*(const Fraction &first, const Fraction &second);
    friend Fraction operator/(const Fraction &first, const Fraction &second);
    friend bool operator==(const Fraction &first, const Fraction &second);
    friend bool operator!=(const Fraction &first, const Fraction &second);
    friend bool operator>(const Fraction &first, const Fraction &second);
    friend bool operator<(const Fraction &first, const Fraction &second);
    friend bool operator>=(const Fraction &first, const Fraction &second);
    friend bool operator<=(const Fraction &first, const Fraction &second);

    
    // IO:
    // friend ostream& operator>> (std::istream& output, const Fraction& fracNum);
    friend ostream &operator<<(std::ostream &output, const Fraction &fracNum);
};
namespace ariel
{
} // namespace ariel
