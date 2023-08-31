#include <iostream>
using namespace std;

int main(){
    int n,x_res=0,y_res=0,z_res=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        x_res += arr[i][0];
        y_res += arr[i][1];
        z_res += arr[i][2];
    }
    if(x_res ==0 && y_res==0 && z_res==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}