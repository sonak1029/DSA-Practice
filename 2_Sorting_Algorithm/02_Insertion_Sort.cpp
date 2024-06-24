#include<iostream>
using namespace std;


void insertion_Sort(int *arr, int size){

    for(int i=1; i<=size-1; i++){ // 1<=8 2<=8 3<=8

        // current stand for current_Element
        int current = arr[i]; // 3 4 -1
        // prev stand for Previous_Element
        int prev = i - 1; // 3 - 1 = 2

        while(prev >= 0 && arr[prev] > current){ // 2>=0 && 4 > -1 yes

            arr[prev + 1] = arr[prev]; // 2+1 = 3
            prev = prev - 1;

        }

        arr[prev + 1] = current;  // 

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