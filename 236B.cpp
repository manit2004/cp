#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,count=0;
    cin>>a>>b>>c;

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                for(int l=1;l<=sqrt(i*j*k);l++){
                    if((i*j*k)%l==0){
                        if((i*j*k)/l==l){
                            count++;
                        }
                        else{
                            count+=2;
                        }
                    }
                }
            }
        }
    }
    cout<<count;
    return 0;
}