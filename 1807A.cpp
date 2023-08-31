#include <iostream>
using namespace std;

int main(){
    int runtime;
    cin>>runtime;

    for(int m=1;m<=runtime;m++){
    int arr[3];
    bool stop=false;
    //cout<< "Enter three numbers: \n";
    for(int i=0;i<=2;i++){
        cin>>arr[i];
    }

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            for(int k=0;k<=2;k++){
                if(arr[i]+arr[j]==arr[k] && i!=j && k!=i && k!=j){
                    cout<< "+\n";
                    stop=true;
                    break;
                }
                else if(arr[i]-arr[j]==arr[k] && i!=j && k!=i && k!=j){
                    cout<<"-\n";
                    stop=true;
                    break;
                }
            }
            if(stop==true){
                break;
            }
        }
        if(stop==true){
            break;
        }
    }

    }

    return 0;
}