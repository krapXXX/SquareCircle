#pragma once
#include <iostream>

class Square
{
    double d;
public:
    Square();
    Square(double a);
    void SetS(double a);
    double GetS() const;
    void Input();
    void Output() const;
};