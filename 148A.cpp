#include <iostream>
using namespace std;

int main(){
    int k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    int arr[d];
    
    for(int i=0;i<d;i++){
        arr[i]=i+1;
    }

    for(int i=0;i<d;i++){
        if(arr[i]%k==0 || arr[i]%l==0 || arr[i]%m==0 || arr[i]%n==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}