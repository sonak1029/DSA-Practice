#include<iostream>

using namespace std;

int main(){
    // Reverse Each Row of matrix

    int matrix[3][4] = {
        {2, 5, 8, 1},
        {5, 9, 3, 10},
        {7, 4, 6, 1},
    };

    // Print my matrix
    cout <<"Before Matrix is This" <<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout <<matrix[i][j] <<" ";
        }cout <<endl;
    }


    cout <<endl;

    // We are going to Reverse the matrix only row ok

    for(int i=0; i<3; i++){
        int start = 0, end = 4-1;

        while(start < end){
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }

    }



    cout <<"And After Reverse Matrix you can see the matrix" <<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout <<matrix[i][j] <<" ";
        }cout <<endl;
    }




    return 0;
}