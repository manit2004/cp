#include <iostream>
#include <algorithm>
using namespace std;
/*int gcd(int a, int b){
    if (a == 0){
        return b;
    }
    return gcd(b % a, a);
}*/
int main(){
        int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        //bool stop=false;
        cin>>n;
        if(n%2==0){
            cout<<n-3<<" "<<2<<" "<<1<<"\n";
        }else{
            cout<<(n-3)/2<<" "<<(n+1)/2<<" "<<1<<"\n";
        }
        /*for(int i=n;i>=1;i--){
            for(int j=n-i;j>=2;j--){
                if(i==j && j==n-(i+j) && i==n-(i+j)){
                    continue;
                }
                if(__gcd(i,j)==n-(i+j) && i!=j && j!=n-(i+j) && i!=n-(i+j)){
                    cout<<i<<" "<<j<<" "<<n-(i+j)<<"\n";
                    stop=true;
                }
                if(stop==true){
                    break;
                }
            }
            if(stop==true){
                break;
            }
        }*/
    }

    return 0;
}