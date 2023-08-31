#include <iostream>
using namespace std;

int main(){
    int n,k,participants=0;
    cin>> n >> k;
    int arr[n];

    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    for(int i=0;i<=n-1;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            participants++;
        }
    }

    cout<< participants;
    return 0;
}