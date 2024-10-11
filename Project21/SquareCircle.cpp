#include "SquareCircle.h"
#include <iostream>

using namespace std;

SquareCircle::SquareCircle() : Square(), Circle() {}
SquareCircle::SquareCircle(double a, double b) : Square(a), Circle(b) {}

bool SquareCircle::CanFit() const 
{
    return GetD() <= GetS();
}

void SquareCircle::Input() 
{
    Square::Input();
    Circle::Input();
}

void SquareCircle::Output() const 
{
    Square::Output();
    Circle::Output();

    if (CanFit()) 
    {
        cout << "The circle can fit inside the square" << endl;
    }
    else {
        cout << "The circle cannot fit inside the square" << endl;
    }
}