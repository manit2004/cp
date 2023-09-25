#include <iostream>
#include <cstring>
using namespace std;

string swap(string unswapped, int x, int y){
    char temp = unswapped[x];
    unswapped[x] = unswapped[y];
    unswapped[y] = temp;
    return unswapped;
    }

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str;
        string abc="abc";
        cin>>str;
        bool flag=false;
        int len=str.length();
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                    string temp_str =swap(str,i,j);
                    if(abc.compare(temp_str)==0){
                        cout<<"YES\n";
                        flag=true;
                        break;
                    }
                    else{
                        continue;
                    }
            }
            if(flag==true){
                break;
            }
        }
        if(flag==false){
            cout<<"NO\n";
        }
    }
    return 0;
}