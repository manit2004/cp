#include <iostream>
#include <string>
using namespace std;

int main(){
    int length,count=0,black_count;
    cin>>length;
    string color;
    string black_group= "";
    cin>>color;
    bool check=false;

    for(int i=0;i<length;i++){
        if(color[i]=='W'){
            check=false;
        }
        else if(color[i]=='B' && check==false){
            check=true;
            count++;
            black_count=0;
        }
        if(check==true){
            black_count++;
        }
        if(check==true && (color[i+1]=='W' || i == length-1) ){
            //cout<<black_count;
            string temp = to_string(black_count) + " ";
            black_group += temp;
        }
    }
    
    cout<<count<<"\n";
    cout<<black_group;
    return 0;
}