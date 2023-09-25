#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int count=0;
        int start=0,end=0;
        for(int i=0;i<n;i++){
            if(str[i]=='W'){
                continue;
            }
            else if(str[i]=='B'){
                if(i>start && i<end){
                    continue;
                }
                else{
                    start=i;
                    end=i+k;
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}