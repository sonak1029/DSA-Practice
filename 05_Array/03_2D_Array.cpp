#include<bits/stdc++.h>
using namespace std;

int main(){
    // 2D Array Representation
    int A[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // How to print All the Element of Matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout <<A[i][j] <<" ";
        }cout <<endl;
    }



    // Second is Array Of Pointer
    int *B[3];
    B[0] = new int[4];


    // Third is Doulbe Pointer
    int **C;


    return 0;
}