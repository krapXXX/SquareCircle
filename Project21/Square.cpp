#include "Square.h"
#include <iostream>

using namespace std;

Square::Square()
{
    d = 0;
}

Square::Square(double a)
{
    d = a;
}
void Square::SetS(double a)
{
    d = a;
}

double Square::GetS() const
{
    return d;
}

void Square::Input()
{
    cout << "Enter diameter of the square: ";
    cin >> d;
}

void Square::Output() const
{
    cout << "The diameter of the square: " << d << endl;
}

