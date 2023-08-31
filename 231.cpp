#include <iostream>
using namespace std;

int main(){
    int runtime,problem=0;
    cin>> runtime;

    for(int i=1;i<=runtime;i++){
        int arr[3];
        int sum=0;
        for(int j=0;j<=2;j++){
            cin>>arr[j];
        }
        for(int k=0;k<=2;k++){
            sum= sum+ arr[k];
        }
        if(sum>=2){
            problem +=1;
        }
    }
    cout<< problem;
    return 0;
}