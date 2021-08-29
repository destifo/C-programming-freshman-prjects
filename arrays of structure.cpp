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

void disadd(point res)
{
    cout<< "The sum of the two points is :"<< "("<<res.a<< "  "<<res.b<< "  "<< res.c<< ")"<<endl;
}


point sub(point x[], int n)
{

    point diff = { 0, 0, 0 };
    diff.a = pow((x[0].a - x[1].a), 2);
    diff.b = pow((x[0].b - x[1].b), 2);
    diff.c = pow((x[0].c - x[1].c), 2);
    return diff;
}


double mod[2];
double modu(point x[], int n)
{

     mod[0] = sqrt(pow(x[0].a, 2.0) + pow(x[0].b, 2.0) + pow(x[0].c, 2.0));
     mod[1] = sqrt(pow(x[1].a, 2.0) + pow(x[1].b, 2.0) + pow(x[1].c, 2.0));

    return mod[n] ;
}

void dispm(double mod[], int n)
{
    cout << "The modulus of the 1st point is :" << mod[0] << endl;
        cout << "The modulus of the 2nd point is :"<< mod[1] << endl;

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

            disadd(add(point x[], int n));


    return 0;
}
