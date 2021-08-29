#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;



bool isu(char x[], int y)
{
    for(int i = 0; i<y; i++)
    {
        if(isupper(x[i]))
        {
            break;
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool isal(char x[], int y)
{
    for(int i = 0; i<y; i++)
    {
        if(isalnum(x[i]))
        {
            break;
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool issp(char x[], int y)
{

    for(int i = 0; i<y; i++)
    {
        if(isspace(x[i]))
        {
            break;
            return false;
        }
        else
        {
            return true;
        }
    }
}

bool ispal(char x[], int y)
{
    for (int i = 0; i<y; i++)
    {
        for (int  j =y-1 ; j>-1; j--)
        {
            if (x[i] == x[j])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}


int main()
{
    int n;
    char x[100];


    cout<< "NO Spaces allowed"<<endl;
    cout<< "Use at least one upper case"<<endl;
    cout<< "Use at least one number"<<endl;
    cout<< "Make sure your password is spelled identical from both left to right and right to left"<<endl;
    cout<< "Enter your password:"<<endl;
    cin>> x;

    int y = strlen (x);

    if (ispal(x, y) && isal(x, y) && isu(x, y) && issp(x, y))
    {
        cout<< "The password is correct";
    }
    else
    {

        cout << "The password is invalid";
    }

    return 0;
}
