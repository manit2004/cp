#include <iostream>
using namespace std;

int fibonacci(int n){
    int a = 0, b = 1, c;
    if (n == 0){
        return a;
    }
    if(n==1){
        return b;
    }
    else{
        for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
    }
}

int main(){
    int num,index=0;
    cin>>num;
    while(num!=fibonacci(index)){
        index++;
    }
    if(index>=3){
        cout<<fibonacci(index-2)<<" "<<fibonacci(index-3)<<" "<<fibonacci(index-2);
    }
    if(index==1 || index==2){
        cout<<1<<" "<<0<<" "<<0;
    }
    if(index==0){
        cout<<0<<" "<<0<<" "<<0;
    }
    return 0;
}