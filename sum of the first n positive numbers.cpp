#include <iostream>
# include <cmath>
using namespace std;

int main()
{
    int sum = 0, c1;
    cout<< "Enter the count: "<<endl;
    cin>>c1;

    for(int i=0; i<=c1; i++)
    {
        sum = sum + i;
    }
        cout<<sum<<endl;

    return 0;
}
