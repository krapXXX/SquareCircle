#pragma once
#include <iostream>

class Circle
{
    double d;
public:
    Circle();
    Circle(double a);
    void SetD(double a);
    double GetD() const;
    void Input();
    void Output() const;
};