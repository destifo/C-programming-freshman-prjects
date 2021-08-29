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



point add(point x[], int n)
{
    point res = { 0, 0, 0 };
    res.a = x[0].a + x[1].a;
    res.b = x[0].b + x[1].b;
    res.c = x[0].c + x[1].c;
    return res;
}

void disadd(point k)
{
    cout<< "The sum of the two points is :"<< "("<<k.a<< ",  "<<k.b<< ",  "<< k.c<< ")"<<endl;
}


int main()
{

    point x[2];
        cout<< "Enter the 1st point coordinates: "<<endl;
        cin >> x[0].a >> x[0].b >> x[0].c;

            cout << endl;
            cout << endl;

        cout << "Enter the 2nd point coordinates: " << endl;
            cin >> x[1].a >> x[1].b >> x[1].c;

            disadd(add(x,n));


    return 0;
}

/*
Estifanos Bireda
UGR/6051/12
Section 3
*/
