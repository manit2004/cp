#include <iostream>
using namespace std;

int main(){
    int n,m,c;
    cin>>n>>m>>c;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<n-m+1;i++){
        int k=0;
        for(int j=i;j<n;j++){
            if(k<m){
                a[j]=(a[j]+b[k])%c;
                k++;
            }
            else{
                a[j]=a[j]%c;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}