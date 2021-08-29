#incude <iostream>
#include <cmath>

using namespace std;

double ada(double x, double y = 0)
{
    return x+y;
}

double ada(double a)
{
    return a++;
}


//checking error
int main ()
{

    double b = ada(3);
    std::cout<<b;

    return 0;
}
