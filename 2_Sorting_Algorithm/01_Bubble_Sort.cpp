#include<iostream>
using namespace std;

// Bubble sort Algorithum

void bubble_Sort(int *arr, int size){
    
    for(int i=1; i<size; i++){
        // Repeted Swaping
        for(int j=0; j<size-i; j++){
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }

}



int main(){
    // Bubble sort Algorithm
    int arr[5] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    bubble_Sort(arr, size);

    for(auto x : arr){
        cout <<x <<" ";
    }cout <<endl;

    return 0;

}