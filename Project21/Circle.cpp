#include "Circle.h"
#include <iostream>

using namespace std;
Circle::Circle()
{
    d = 0;
}

Circle::Circle(double a)
{
    d = a;
}
void Circle::SetD(double a) 
{
    d = a;
}

double Circle::GetD() const 
{
    return d;
}

void Circle::Input() 
{
    cout << "Enter diameter of the circle: ";
    cin >> d;
}

void Circle::Output() const 
{
    cout << "The diameter of the circle: " << d << endl;
}


