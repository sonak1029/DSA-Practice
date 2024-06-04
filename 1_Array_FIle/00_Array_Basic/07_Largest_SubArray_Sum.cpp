#include<iostream>
using namespace std;

// This Approach is The Brute Force O(n) Time

int largest_Subarray_Sum(int *arr, int size){

    int largest_Sum = 0;

    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            int subarray_Sum = 0;

            for(int k=i; k<=j; k++){
                subarray_Sum += arr[k];
                cout <<subarray_Sum <<" ";
            }cout <<endl;

            largest_Sum = max(largest_Sum, subarray_Sum);

        }
    }

    return largest_Sum;

}



int main(){
    int arr[9] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    cout <<"Before we Print The Largest Sub Array Sum The Array is look like this" <<endl;
    for(auto i : arr){
        cout <<i <<" ";
    }cout <<endl;

    cout <<endl;

    // Print The Largest Sub Array Sum
    cout <<"After we Print The Largest Sub Array Sum The Array is look like this" <<endl;
    cout <<largest_Subarray_Sum(arr, size) <<endl;


    return 0;
}