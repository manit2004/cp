#include <iostream>
using namespace std;
//wrong answer on test 7
int main(){
    int length,num,left_sum=0,right_sum=0;
    long int count=0;
    cin>>length>>num;
    int arr[length];

    int div=10;
    for(int i=0;i<length;i++){
        arr[i]=num%10;
        num =num/10;
    }
    
    for(int i=0;i<=length-1;i++){
        if(arr[i]==4 || arr[i]==7){
            count++;
        }
    }
    for(int i=0;i<length/2;i++){
        left_sum += arr[i];
    }
    for(int i=length-1;i>=length/2;i--){
        right_sum += arr[i];
    }
    cout<<count<<" "<<left_sum<<" "<<right_sum;
   /*if(left_sum==right_sum && count==length)
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }*/

    return 0;
}