#include <iostream>
# include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    double discriminant=(b*b)-(4*a*c);
    cout<< "Enter the coefficient of the variables from higher degree to the lowest"<<endl;
    cin>> a>> b>> c;
    if(discriminant<0)
    {
        cout<< "it has no real roots"<<endl;
    }
    if(discriminant==0)
    {
        cout<< "it has one real root"<<endl;
        cout<< "the only solution is " << -b/(2*a) <<endl;
    }
    if(discriminant>0)
    {
        cout<< "it has two real roots"<<endl;
        cout<<"first solution is " <<(-b+sqrt(discriminant))/(2*a)<<endl;
        cout<< "the second solution is "<< (b+sqrt(discriminant))/(2*a)<<endl;
    }
    return 0;
}
