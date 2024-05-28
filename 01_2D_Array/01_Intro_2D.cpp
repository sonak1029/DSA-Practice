#include<iostream>
#include<array>

using namespace std;

void printMatrix(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout <<arr[i][j] <<" ";
        }cout <<endl;
    }
}



int main(){
    // We are going to declared 2D array
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    // Now i am going to print all the value 
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout <<arr[i][j] <<" ";
    //     }cout <<endl;
    // }

    // printMatrix(arr, 3, 4);   


    // Now i am going to search Element in 2D Array
    int search = 11;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j] == search){
                cout <<arr[i][j] <<" : is present in 2D Array" <<endl;
            }
        }
    }





    return 0;
}