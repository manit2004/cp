#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c;
    float x,y,z;
    cin>>a>>b>>c;
    x=sqrt((a/b)*c);
    y=sqrt((b/c)*a);
    z=sqrt((c/a)*b);
    cout<<4*(x+y+z);
    return 0;
}