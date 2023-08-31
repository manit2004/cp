#include <iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    int arr[3];
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    arr[0]=(k*l)/nl;
    arr[1] = c*d;
    arr[2] = p/np;
    
    int min=arr[0];
    for(int i=0;i<=2;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    cout<<min/n;

    return 0;
}