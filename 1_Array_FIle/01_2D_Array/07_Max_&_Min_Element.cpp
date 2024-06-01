#include<iostream>

using namespace std;


void maxElement(int matrix[][4], int row, int col){
    int maxElement = matrix[0][0];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j] > maxElement)
                maxElement = matrix[i][j];
        }
    }

    cout <<"The Maximum Element in 2D Array is : " <<maxElement <<endl;


}



// void minElement(int matrix[][4], int row, int col){
//     int minElement = matrix[0][0];

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(matrix[i][j] < minElement)
//                 minElement = matrix[i][j];
//         }
//     }

//     cout <<"The Minimum Element in 2D Array is : " <<minElement <<endl;


// }




int main(){
    // Find the Maximum Element in 2D Array
    int matrix[3][4] = {
        {2, 6, 8, 5},
        {4, 0, 20, 9},
        {19, 3, 7, 1},
    };

    maxElement(matrix, 3, 4);
    // minElement(matrix, 3, 4);



    return 0;
}