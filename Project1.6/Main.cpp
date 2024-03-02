#include "Real.h"
#include <iostream>

using namespace std;

Real makeReal() {
    Real r;
    r.Read();
    r.Display();
    return r;
}

int main()
{
    Real r = makeReal();

    cout << "add = " << r.addC() << endl;
    cout << "div = " << r.div() << endl;

    int i;
    cout << "(pow)i = "; cin >> i;
    cout << "power = " << r.power(i) << endl;
    cout << "log = " << r.loga() << endl;

    cout << r.toSring() << endl;
}