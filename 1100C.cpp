#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.14159265358979323846

int main(){
    double n,r;
    cin>>n>>r;
    double sin_a=sin((2*PI)/n), sin_theta=sin((PI/2)-(PI/n));
    double result = r/(2*(sin_theta/sin_a)-1);
    cout<<fixed<<setprecision(7)<<result;
    return 0;
}