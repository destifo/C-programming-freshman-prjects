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
                for(int i = 0; i<c1; i++)//begins the math or the summation process of the even numbers
                {
                    int m;
                    m = 2*i + 2;
                    sum = sum + m;
                }
            }


/**
    This section calculates the sum of the given odd numbers
**/
    if(numt == 'O' || numt == 'o')//for odd entry
    {
        for(int i = 0; i<c1; i++)// the summation process of the odd numbers
            {
                int m = 2*i + 1;
                sum = sum + m;
            }
    }


/**
    The final output
**/
    cout<< "The sum of the First positive "<<c1<<numtype<< " numbers is "<<sum<<endl;//the final output
    cout<< "THANK YOU";


    return 0;
    }

    /**
    Estifanos Bireda
    UGR/6051/12
    Section 3
    **/




