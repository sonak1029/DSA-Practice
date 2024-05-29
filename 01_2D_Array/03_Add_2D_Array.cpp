#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    int sum = 0;

    // cout<<"We are going to print the Row total" <<endl;
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         sum += arr[i][j];
    //     }
    //     cout <<"The sum of Row is : " <<sum <<endl;
    //     sum = 0;
    // }




    // cout<<"We are going to print the column total" <<endl;
    // for(int j=0; j<4; j++){
    //     for(int i=0; i<3; i++){
    //         sum += arr[i][j];
    //     }
    //     cout <<"The sum of Column is : " <<sum <<endl;
    //     sum = 0;
    // }


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

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout <<ans[i][j] <<" ";
        }cout <<endl;
    }

    return 0;
}