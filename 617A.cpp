#include <iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int arr[5];
    while(n!=0){
        for(int i=0;i<5;i++){
        arr[i]=n-(i+1);
    }
    int temp=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<temp && arr[i]>=0){
            temp=arr[i];
        }
    }
    n=temp;
    count++;
    }
    cout<<count;
    return 0;
}