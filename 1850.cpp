#include <iostream>
using namespace std;

int main(){
    int runtime;
    cin>>runtime;

    for(int k=1;k<=runtime;k++){
    int arr[3];
    for(int i=0;i<=2;i++){
        cin>> arr[i];
    }

    for(int i=0;i<=2;i++){
       bool stop=false;
        for(int j=0;j<=2;j++){
            if(arr[i]+arr[j]==10 && i!=j){
                cout<< "YES\n";
                stop = true;
                break;
            }
            if(arr[i]+arr[j]>10 && i!=j){
                cout<< "YES\n";
                stop = true;
                break;
            }
        }
        if(stop==true){
            break;
        }
        if(stop==false && i==2){
            cout<< "NO\n";
        }
    }
    }
    
    return 0;
}