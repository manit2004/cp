#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int minimum=arr[0];
        int min_index=0;
        for(int i=1;i<n;i++){
            if(arr[i]<minimum){
                minimum=arr[i];
                min_index=i;
            }
        }
        arr[min_index]+=1;

        int product=1;
        for(int i=0;i<n;i++){
            product*=arr[i];
        }
        cout<<product<<"\n";
    }
    return 0;
}