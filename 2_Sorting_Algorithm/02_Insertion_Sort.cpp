#include<iostream>
using namespace std;


void insertion_Sort(int *arr, int size){

    // 5 4 3 2 1

    for(int i=1; i<=size-1; i++){ // 1<=4 2<=4 3<=4

        // current stand for current_Element
        int current = arr[i]; // 4 3 2
        // prev stand for Previous_Element
        int prev = i - 1; // 0 1 2

        while(prev >= 0 && arr[prev] > current){ // 1>=0 && 4 > 2

            arr[prev + 1] = arr[prev]; // 3 4
            prev = prev - 1;

        }

        arr[prev + 1] = current;  // 3 4

    }

}


int main(){
    // Insertion Sorting Algorithm

    int arr[9] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    insertion_Sort(arr, size);

    for(auto x : arr){
        cout <<x <<" ";
    }cout <<endl;

    return 0;

}