#include<iostream>

using namespace std;

int main(){
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };


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