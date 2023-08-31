#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int max=0,count=0;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(b[j]%a[i]==0){
                int temp=b[j]/a[i];
                if(temp>max){
                    max=temp;
                }
            }
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(b[j]%a[i]==0 && b[j]/a[i]==max){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}