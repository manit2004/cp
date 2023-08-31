#include <iostream>
using namespace std;

int main(){
    int n,k;
    int odd_index,even_index;
    cin>>n>>k;
    if(n%2==0){
        odd_index = 0;
        even_index = n/2;
    }
    else{
        odd_index=0;
        even_index=(n+1)/2;
    }
    int seq[n];
    for(int i=1;i<=n;i++){
        if(i%2==0){
            seq[even_index]=i;
            even_index++;
        }
        if(i%2==1){
            seq[odd_index]=i;
            odd_index++;
        }
    }
    cout<<seq[k-1];
    return 0;
}