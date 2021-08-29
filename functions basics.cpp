#include <iostream>
using namespace std;

void myfun(int chapter, string lsno)
{
    cout<< "checking the function found in chapter "<< chapter<< " lesson "<<lsno<<endl;
}

int main()
{
    myfun(4, "five");
    myfun(1, "four");
    myfun(3, "eight");
}
