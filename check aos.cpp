#include<iostream>
using namespace std;


struct point{
double x;
double y;
double z;
};
point add(point a, point b){
point sum={0,0,0};
sum.x = a.x + b.x;
sum.y = a.y + b.y;
sum.z = a.z + b.z;
return sum;
}
void dispsum(point c){
cout<<c.x<<","<<c.y<<","<<c.z<<endl;
}
int main(){
point a,b;
a = {1,2,3};
b = {4,5,6};
dispsum(add(a,b));


return 0;
}
