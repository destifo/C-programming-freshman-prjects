#include <iostream>
#include <cmath>

using namespace std;

struct point
{
    double a;
    double b;
    double c;
};


int n;

point modu(point x)
{

    point mod;
    mod.a = pow(x.a, 2.0) ;
    mod.b = pow(x.b, 2.0) ;
    mod.c = pow(x.c, 2.0) ;
    return mod;
}


void dispm(point i)
{
    cout<< "The modulus of the point is : "<<sqrt(i.a + i.b + i.c)<<endl;

}


int main()
{

    point x;
        cout<< "Enter the point coordinates: "<<endl;
        cin >> x.a >> x.b >> x.c;

            cout << endl;
            cout << endl;

            dispm(modu(x));


    return 0;
}


/*
Estifanos Bireda
UGR/6051/12
Section 3
*/
