#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool condition=false;

    char arr[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        if((arr[i][0]=='O' && arr[i][1]=='O') || (arr[i][3]=='O' && arr[i][4]=='O')){
            cout<<"YES"<<"\n";
            if(arr[i][0]=='O' && arr[i][1]=='O'){
                arr[i][0]='+';
                arr[i][1]='+';
            }
            else{
                arr[i][3]='+';
                arr[i][4]='+';
            }
            condition=true;
            break;
        }
    }

    if(condition==false){
        cout<<"NO"<<"\n";
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
    }
    

    return 0;
}