#include <iostream>
using namespace std;

int main(){
    int m,n,x=0,y=0;
    cin>>m>>n;
    char arr[m][n];
    int xp[3];
    int yp[3];

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            if(arr[i][j]=='*'){
                yp[y]=j;
                xp[x]=i;
                x++;
                y++;
            }
        }
    }

    int a=xp[0];
    for(int i=1;i<=2;i++){
        a ^= xp[i];
    }
    int b=yp[0];
    for(int i=1;i<=2;i++){
        b ^= yp[i];
    }

    cout<<a+1<<" "<<b+1;
    return 0;
}