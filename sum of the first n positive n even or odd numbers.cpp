#include <iostream>
# include <cmath>
using namespace std;

int main()
{


/**
    This is the declaration and the input section
**/
    int sum = 0, c1, n = 1;
    char numt;
    string numtype;
    cout<< "Enter the count: "<<endl;
    cin>>c1;
    cout<< "Enter E for even or O for odd"<<endl;
    cin>> numt;


/**
  This is the checking section for the number type(even or odd)
  **/
    while(numt!= 'E' && numt!= 'e' && numt!= 'o' && numt!= 'O')// returns any entries else the specified number types(that is odd or even in this case)
    {
        cout<< "Incorrect Input"<<endl;
        cout<< "please try again: "<<endl;
        cin>> numt;
    }


/**
    The string assignment section based on the input we received as 'O' or 'E'
**/
    if(numt == 'O' || numt == 'o')//gives a variable the strings either Even or Odd
    {
        numtype = " Odd";
    }
    else
    {
        numtype = " Even";
    }


/**
    This section calculates the sum of the given even numbers
**/
    if(numt == 'E' || numt == 'e')//for even entry
    {
        if(n%2 == 1)//checks if n is an odd or not
            {
                n = n--;
                for(int i = 0; i<c1; i++)//begins the math or the summation process of the even numbers
                {
                    int m;
                    m = 2*i + 2;
                    sum = sum + m;
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


/**
    This section calculates the sum of the given odd numbers
**/
    if(numt == 'O' || numt == '0')//for odd entry
    {
        if(n%2 != 1)//checks if the number type is odd or not
        {

            for(int i = 0; i<c1; i++)// the summation process of the odd numbers
            {
                n = n+2;
                sum = sum + n;
            }
        }
        else if(n%2 == 1)
        {
            for(int i = 0; i<c1; i++)
            {
                n = n+2;
                sum = sum + n;
            }
        }
    }


/**
    The final output
**/
    cout<< "The sum of the First positive "<<c1<<numtype<< " numbers is "<<sum<<endl;//the final output
    cout<< "THANK YOU";


    return 0;
    }




