#include<iostream>
#include <bits/stdc++.h>

using namespace std;


void addTwoMatrix(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout <<arr[i][j] <<" ";
        }cout <<endl;
    }
}




int main(){
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 1},
    };

    int sum = 0;

    // cout<<"We are going to print the Row total" <<endl;
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         sum += arr[i][j];
    //     }
    //     cout <<"The Sum of Row is : " <<sum <<endl;
    //     sum = 0;
    // }

    // cout <<"The Sum of Row is : " <<sum <<endl;




    // cout<<"We are going to print the column total" <<endl;
    // for(int j=0; j<4; j++){
    //     for(int i=0; i<3; i++){
    //         sum += arr[i][j];
    //     }
    //     cout <<"The Sum of columns is : " <<sum <<endl;
    //     sum = 0;
    // }


    // cout <<"The Sum of columns is : " <<sum <<endl;


    // Add 2D Matrix
    int arr1[3][4] = {
        {2, 3, 4, 5},
        {0, 1, 34, 3},
        {1, 20, 6, 4},
    };

    int arr2[3][4] = {
        {3, 44, 1, 2},
        {2, 6, 9, 8},
        {1, 3, 45, 5},
    };

    int ans[3][4];



    cout <<"We are going to Add 2 Array and print the sum and this sum is based on Row" <<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // We going to print the matrix
    // addTwoMatrix(ans, 3, 4);


    // cout <<"We are going to Add 2 Array and print the sum and this sum is based on Column" <<endl;
    // for(int j=0; j<4; j++){
    //     for(int i=0; i<3; i++){
    //         ans[i][j] = arr1[i][j] + arr2[i][j];
    //     }
    // }


    // We going to print the matrix
    for(int j=0; j<4; j++){
        for(int i=0; i<3; i++){
            cout <<ans[i][j] <<" ";
        }cout <<endl;
    }
    

    return 0;
}