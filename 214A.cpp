#include <iostream>
using namespace std;

int main(){
    int n,m,count=0;
    cin>>n>>m;
    
    for(int i=0;i<=max(n,m);i++){
        for(int j=0;j<=max(n,m);j++){
            if(i*i+j==n && i+j*j==m){
                //cout<<"("<<i<<","<<j<<")"<<"\n";
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}