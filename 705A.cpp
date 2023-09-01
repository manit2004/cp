#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string output="I hate ";
    for(int i=2;i<=n;i++){
        if(i%2==0){
            output +="that I love ";
        }
        else{
            output +="that I hate ";
        }
    }
    cout<<output+"it";
    return 0;
}