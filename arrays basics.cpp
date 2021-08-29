#include <iostream>
# include <cmath>
using namespace std;

int main()
{
    int n[5] = {1,2,3,4,5};
    int m[7] = {7,8,9,10,11,12,13};
    int b[5] = {99,88,77};
    char c[] = { 'h', 'e', 'l', 'l', 'o', '\0'};

    cout<<c<<endl;
    cout<< "yet another array"<<endl;
    for(int i=0; i<5; i++)//list the values of an array
    {
        cout<<b[i]<<endl;
    }

    cout<< "another array list"<<endl;

    for(int i=0; i<5; i++)//list the values of an array
    {
        cout<<n[i]<<endl;
    }

    for(int i=0; i<7; i++)
    {
        n[i]=m[i];
    }

    cout<< "newly assigned array"<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<n[i]<<endl;
    }

    return 0;
}
