#include <iostream>
#include <cmath>

using namespace std;

int n;

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {

        return fibo(n-1) + fibo (n-2);
    }
}

int main()
{

    cout << "provide the count no you want in Fibonacci sequence: " << endl;
    cin >> n;
    cout << "The " << n << "th value of the Fibonacci sequence is : " << fibo(n);

    return 0;
}


/*
Estifanos Bireda
UGR/6051/12
Section 3
*/
