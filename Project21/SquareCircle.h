#pragma once
#include "Square.h"
#include "Circle.h"

class SquareCircle : public Square, public Circle
{
public:
    SquareCircle();
    SquareCircle(double a, double b);
    bool CanFit() const;
    void Input();
    void Output() const;
};