#include<iostream>
using namespace std;


// Prefix Sum Approch
int maximum_Subarray_Sum(int *arr, int size){
    int current_Sum = 0;
    int largst_Sum = 0;

    for(int i=0; i<size; i++){
        current_Sum = current_Sum + arr[i];
        if(current_Sum < 0){
            current_Sum = 0;
        }

        largst_Sum = max(largst_Sum, current_Sum);
    }

    return largst_Sum;

}




int main(){
    int arr[9] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
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