#include<iostream>
using namespace std;

bool compare(int a, int b){
    cout <<"Comparing " <<a <<" And " <<b <<endl;
    return a > b;
}

// Bubble sort Algorithum

void bubble_Sort(int *arr, int size){
    
    for(int i=1; i<size; i++){
        // Repeted Swaping
        for(int j=0; j<size-i; j++){
            if(compare(arr[j], arr[j+1])){
                swap(arr[j], arr[j+1]);
            }
        }
        cout <<endl;
    }

}



int main(){
    // Bubble sort Algorithm
    int arr[9] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    bubble_Sort(arr, size);

    for(auto x : arr){
        cout <<x <<" ";
    }cout <<endl;

    return 0;

}