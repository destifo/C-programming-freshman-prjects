#include <iostream>
using namespace std;

double cube(double num)
{
    return num*num*num;
    cout<< "It won't print cause this sentence is after return";
}

int main()
{
    cout<< cube(4.0);
    return 0;
}
