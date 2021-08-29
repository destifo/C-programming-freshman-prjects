#include <iostream>
# include <cmath>
using namespace std;

int main()
{
    int sum = 0, c1, n = 1;
    char numt;
    string numtype;
    cout<< "Enter the count: "<<endl;
    cin>>c1;
    cout<< "Enter E for even or O for odd"<<endl;
    cin>> numt;

    while(numt!= 'E' && numt!= 'e' && numt!= 'o' && numt!= 'O')
    {
        cout<< "Incorrect Input"<<endl;
        cout<< "please try again: "<<endl;
        cin>> numt;
    }
    if(numt == 'O' || numt == 'o')
    {
        numtype = " Odd";
    }
    else
    {
        numtype = " Even";
    }

    if(numt == 'E' || numt == 'e')
    {
        if(n%2 == 1)
            {
                n = n++;
                for(int i = 0; i<c1; i++)
                {
                    n+=2;
                    sum = sum + n;
                }
            }
        else
        {
            for(int i = 0; i<c1; i++)
            {
                n+=2;
                sum = sum + n;
            }
        }

    }
    if(numt == 'O' || numt == '0')
    {
        if(n%2 != 1)
        {
            n-=1;
            for(int i = 0; i<c1; i++)
            {
                n+=2;
                sum = sum + n;
            }
        }
        else if(n%2 == 1)
        {
            for(int i = 0; i<c1; i++)
            {
                n+=2;
                sum = sum + n;
            }
        }
    }
    cout<< "The sum Of the First "<<c1<<numtype<< " is "<<sum<<endl;
    cout<< "THANK YOU";

    return 0;
    }




