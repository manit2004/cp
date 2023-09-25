#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int m=0;m<t;m++){
        char target_practice[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>target_practice[i][j];
            }
        }
        int points[5]={0,0,0,0,0};
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(target_practice[i][j]=='.'){
                    continue;
                }
                else if(target_practice[i][j]=='X'){
                    if(i==0 || i==9 || j==0 || j==9){
                        points[0]+=1;
                    }
                    else if(i==1 || i==8 || j==1 || j==8){
                        points[1]+=1;
                    }
                    else if(i==2 || i==7 || j==2 || j==7){
                        points[2]+=1;
                    }
                    else if(i==3 || i==6 || j==3 || j==6){
                        points[3]+=1;
                    }
                    else if(i==4 || i==5 || j==4 || j==5){
                        points[4]+=1;
                    }
                }
            }
        }
        int product=points[0]*1+points[1]*2+points[2]*3+points[3]*4+points[4]*5;
        cout<<product<<"\n";
    }
    return 0;
}