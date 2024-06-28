#include<iostream>
using namespace std;


void insertion_Sort(int *arr, int size){

    // 5 4 3 2 1

    for(int i=1; i<size; i++){
        
        for(int j=i; j>0; j--){

            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }else{
                break;
            }
            
        }

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