#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b;
        cin>>a>>b;
        if(a%b!=0){
            cout<<b-(a%b)<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
    return 0;
}