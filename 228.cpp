#include <iostream>
using namespace std;

int main(){
    int arr[4];
    int count=1;
    for(int i=0;i<=3;i++){
        cin>>arr[i];
    }

    for(int i=1;i<=3;i++){
        for(int j=0;j<=i;j++){
            if(arr[i]==arr[j] && i!=j){
                break;
            }
            if(i==j){
                count +=1;
            }
        }
    }

    cout<< 4-count;

    return 0;
}