#include "Real.h"
#include <iostream>

using namespace std;

string Real::toSring() const {
    return number.toString();
}

float Real::div() {
    int i;
    cout << "(div)i = "; cin >> i;
    return number.division(i);
}

float Real::addC() {
    int i;
    cout << "(add)i = "; cin >> i;
    return number.add(i);
}

void Real::Init(float flo)
{
    number.Init(flo);
}

void Real::Display() const
{
    cout << endl;
    cout << "number = " << endl;
    number.Display();
}

void Real::Read()
{
    cout << endl;
    cout << "Number = ? " << endl;
    number.Read();
}

float Real::power(int s)
{
    return pow(number.getFlo(), s);
}

double Real::loga()
{
    return log(number.getFlo());
}

void Real::Number::Init(float flo)
{
    setFlo(flo);
}

void Real::Number::Display() const
{
    cout << endl;
    cout << "float = " << flo << endl;
}

void Real::Number::Read()
{
    float flo;
    cout << endl;
    cout << "float = ? "; cin >> flo;
    Init(flo);
}

float Real::Number::add(int a)
{
    float f = getFlo();
    return f + a;
}

float Real::Number::division(int b)
{
    float f = getFlo();
    return f / b;
}

string Real::Number::toString() const {
    stringstream sout;
    sout << "Float: " << getFlo();
    return sout.str();
}