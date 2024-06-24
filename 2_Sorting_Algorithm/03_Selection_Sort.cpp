#include<iostream>
using namespace std; 

void selection_Sort(int *arr, int size){

    for(int pos=0; pos<=size-2; pos++){ // 0<=7 1<=7

        int current = arr[pos]; // 3
        int min_Position = pos; // 1

        // In this loop we are Find out the Minimum Element
        for(int j=pos; j<size; j++){ // 1<9 

            if(arr[j] < arr[min_Position]){ // 3 < 3
                min_Position = j; // -12
            }

        }

        // Outside the loop we are going to Swap The Element
        swap(arr[min_Position], arr[pos]);

    }

}


int main(){
    // Selection Sort
    int arr[9] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    selection_Sort(arr, size);

    for(auto x : arr){
        cout <<x <<" ";
    }cout <<endl;


    return 0;

}