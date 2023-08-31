#include <iostream>
using namespace std;
 
int main(){
    int n,k;
    string even = "";
    string odd = "";
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even += to_string(i);
        }
        if(i%2==1){
            odd += to_string(i);
        }
    }
    string seq = odd+even;
    cout<<seq[k-1];
    return 0;
}