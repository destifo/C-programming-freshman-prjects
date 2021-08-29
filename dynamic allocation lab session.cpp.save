#include<iostream>
#include<cmath>

using namespace std;

int main()
{

    int n;
    int *x;
    x = new int [n];

     cout<< "Enter the no digits in the binary number"<<endl;
     cin>>n;


     cout<<endl;
     cout<<endl;


     for(int i = 0; i < n; i++)
     {
         cout<< "Enter the values of the binary no one by one"<<endl;
         cin>> x[i];
     }

     cout<<endl;
     cout<<endl;


     int sum = 0;
     for(int i = 0; i<n; i++)
     {
         sum = sum + (x[i] * pow(2, n-1-i));
     }

    cout<< "The digital value is : "<<sum;

    return 0;
}
