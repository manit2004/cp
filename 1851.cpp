#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    for(int i=1;i<=repeat;i++){
        int n,m,k,h,count=0;
        cin>>n>>m>>k>>h;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
           if(abs(h-arr[i])%k==0 && (abs(h-arr[i])/k)<=m-1 && (h-arr[i])!=0){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}