#include<iostream>
#include<vector>
using namespace std;


// Prefix Sum Approch
int preFix_Sum(int *arr, int size){
    // prefix Sum
    vector<int> prefix(size); // size ix 9
    prefix = {0}; // Every Value is 0
    prefix[0] = arr[0]; // -2 store

    for(int i=1; i<size; i++){ // i=2 2<9
        prefix[i] = prefix[i-1] + arr[i]; // 1 + 4
    }

    int largest_Sum = 0;

    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){

            // they give me the largest number and then
            int subarray_Sum = i>0 ? prefix[j] - prefix[i-1] : prefix[j]; 

            // we come in largest_Sum they give me the Largest value
            largest_Sum = max(largest_Sum, subarray_Sum);

        }
    }

    return largest_Sum;



}




int main(){
    int arr[9] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    cout <<size <<endl;

    cout <<"Before we Print The Largest Sub Array Sum The Array is look like this" <<endl;
    for(auto i : arr){
        cout <<i <<" ";
    }cout <<endl;

    cout <<endl;

    // Print The Largest Sub Array Sum
    cout <<"After we Print The Largest Sub Array Sum The Array is look like this" <<endl;
    cout <<preFix_Sum(arr, size) <<endl;


    return 0;
}