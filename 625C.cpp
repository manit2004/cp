#include <iostream>
using namespace std;

int main(){
    int n,k,count=1;
    cin>>n>>k;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<k-1;j++){
            arr[i][j]=count;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=k-1;j<n;j++){
            arr[i][j]=count;
            count++;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i][k-1];
    }
    cout<<sum<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}