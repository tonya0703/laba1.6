#pragma once
#include <cmath>
#include <string>
#include <sstream>

class Real
{
private:
    class Number
    {
        float flo;
    public:
        float add(int);
        float division(int);

        void setFlo(float flo) { this->flo = flo; }
        float getFlo() const { return flo; };

        void Init(float flo);
        void Display() const;
        void Read();
        std::string toString() const;
    };

    Number number;

public:
    float power(int s);
    double loga();

    float div();
    float addC();

    void Init(float flo);
    void Display() const;
    void Read();

    void setNumber(float flo) { number.Init(flo); }
    float getNumber() const { return number.getFlo(); };

    std::string toSring() const;
};