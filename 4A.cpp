#include <iostream>
using namespace std;

int main(){
    int weight;
    cin>>weight;
    bool result=false;
    for(int i=2;i<=weight;i+=2){
        if((weight-i)%2==0 && (weight-i)!=0){
            cout<<"YES";
            result=true;
            break;
        }
    }
    if(result==false){
        cout<<"NO";
    }
    return 0;
}