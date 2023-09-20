#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,count=0;
        cin>>n;
        if(n%2==0){
            cout<<(n/2)-1<<"\n";
        }
        else{
            float temp=n/2;
            cout<<fixed<<(int)floor(temp)<<"\n";
        }
    }
    return 0;
}