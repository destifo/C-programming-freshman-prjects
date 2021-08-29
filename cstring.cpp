#include <iostream>
#include <cstring>

using namespace std;

void add()
{


}


int main()
{

    char x[6] = { 'H', 'E', 'L', 'L', 'O', '\0' }, y[6] = { 'D', 'U', 'D', 'E', '\0' }, z[16] = { 'H', 'O', 'W', ' ', 'A', 'R', 'E', ' ', 'Y', 'O', 'U', '?', 'O', 'K', '?', '\0' } ;
    cout<<strlen(x)<<endl;
    cout<<strcat (x, z)<<endl;
    cout<<strcpy (x, y)<<endl;


    return 0;
}
