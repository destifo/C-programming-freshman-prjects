#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int n, f0 = 0, f1 = 1, fn;
    cout<< "Enter the Sequence no of the Fibonacci to be displayed "<<endl;
    cin>> n;


   if(n==0)
    {
        fn = f0;
    }
    else if(n==1)
        {
            fn = f1;
        }

    else
        {

        for(int i = 0; i <n-1; i++)
        {
            fn = f0 +f1;
            f0 = f1;
            f1 = fn;
        }
        }

        cout<< "The "<<n<< "th "<< "value of the Fibonacci sequence is :"<<fn;

    return 0;
}

/*
Estifanos Bireda
UGR/6051/12
Section 3
*/
