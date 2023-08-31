#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int middle= (num-1)/2;
    int arr[num][num];

    for(int i=0;i<=num-1;i++){
        for(int j=0;j<=num-1;j++){
            cin>>arr[i][j];
        }
    }
    //main diagonal
    int main_diagonal_sum=0;
    for(int i=0;i<=num-1;i++){
        for(int j=0;j<=num-1;j++){
            if(i==j){
                main_diagonal_sum += arr[i][j];
            }
        }
    }
    //secondary diagonal
    int secondary_diagonal_sum=0;
    for(int i=0;i<=num-1;i++){
        for(int j=0;j<=num-1;j++){
            if(i+j==num-1){
                secondary_diagonal_sum += arr[i][j];
            }
        }
    }
    //middle row
    int middle_row_sum=0;
    for(int i=0;i<=num-1;i++){
        middle_row_sum += arr[middle][i];
    }
    //middle coloumn
    int middle_coloumn_sum=0;
    for(int i=0;i<=num-1;i++){
        middle_coloumn_sum += arr[i][middle];
    }

    int sum = (main_diagonal_sum + secondary_diagonal_sum + middle_coloumn_sum + middle_row_sum) - (3*arr[middle][middle]);
    cout<<sum;

    return 0;
}