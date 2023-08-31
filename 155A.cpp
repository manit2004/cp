#include <iostream>
using namespace std;

int main(){
    int n,amazing=0,max_count,min_count;
    cin>>n;
    int arr[n];

    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        max_count=0;
        min_count=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[i]){
               max_count++; 
            }
            if(arr[j]<arr[i]){
               min_count++; 
            }
        }
        if(max_count==i){
            amazing++;
        }
        if(min_count==i){
            amazing++;
        }
    }

    cout<<amazing;
    return 0;
}