#include<iostream>
using namespace std;


// kadane's Algorithms
int maximum_Subarray_Sum(int *arr, int size){
    int current_Sum = 0;
    int largest_Sum = 0;

    for(int i=0; i<size; i++){
        current_Sum = current_Sum + arr[i]; // 7+3 = 10
        if(current_Sum < 0){
            current_Sum = 0; // current_Sum = 0 3 7 6 11 0 6 7 10
        }

        largest_Sum = max(current_Sum, largest_Sum); // largest_Sum = 0 3 7 11

    }

    return largest_Sum;

}




int main(){
    int arr[6] = {1, -2, 3, 4, 4, -2};
    int size = sizeof(arr) / sizeof(int);
    cout <<size <<endl;

    cout <<"Before we Print The Maximum Sub Array Sum The Array is look like this" <<endl;
    for(auto i : arr){
        cout <<i <<" ";
    }cout <<endl;

    cout <<endl;

    // Print The Largest Sub Array Sum
    cout <<"After we Print The Maximum Sub Array Sum is this" <<endl;
    maximum_Subarray_Sum(arr, size);

    return 0;
}