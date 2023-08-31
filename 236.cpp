#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string name;
    cin>>name;
    int count =1;
    int len= name.length()-1;

    for(int i=1;i<=len;i++){
        for(int j=0;j<=i;j++){
            if(name[i]==name[j] && i!=j){
                break;
            }
            if(i==j){
                count +=1;
            }
        }
    }

    if(count%2==0){
        cout<< "CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}