#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int age;
    cout<< "Enter your age: "<<endl;;
    cin>> age;

    cout<< "you are "<< age<< " years old"<<endl;
    {
       string name;
       cout<< "Enter your name: ";
       getline(cin, name);
       cout<< "You are called "<<name;
    }

    return 0;
}
