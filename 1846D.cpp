#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        double d,h;
        cin>>n>>d>>h;
        double arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        double area=0.0;
        for(int i=0;i<=n-1;i++){
            if(i==n-1 || (arr[i+1]-arr[i])>=h){
                area+=(0.5*(d*h));
            }
            else{
                area+=(0.5*(((d/h)*(h-(arr[i+1]-arr[i])))+d)*(arr[i+1]-arr[i]));
            }
        }
        cout<<fixed<<setprecision(10)<<area<<"\n";
    }
    return 0;
}