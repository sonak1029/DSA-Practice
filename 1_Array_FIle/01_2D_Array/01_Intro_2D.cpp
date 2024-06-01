#include<iostream>
#include<array>

using namespace std;

void printMatrix(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout <<arr[i][j] <<" ";
        }cout <<endl;
    }
}



int main(){
    // We are going to declared 2D array
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    // Now i am going to print all the value 
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout <<arr[i][j] <<" ";
    //     }cout <<endl;
    // }



    // Declare a 2D array of integers
    // This option is good but in professional we don't use this

    /*
    int rows;
    cout <<"Enter the rows : ";
    cin >>rows;

    int cols;
    cout <<"Enter the column : ";
    cin >>cols;
    int matrix[rows][cols];

    // Input values into the 2D array
    cout << "Enter " << (rows * cols) << " numbers for the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element (" << i << "," << j << "): ";
            cin >> matrix[i][j];
        }
    }




    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    */


    printMatrix(arr, 3, 3);   



    return 0;
}