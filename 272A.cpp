#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int count=0;
    for(int i=1;i<=5;i++){
       if((sum+i)%(n+1)!=1){
        count++;
    }
    }
    cout<<count;
    return 0;
}