#include<iostream>
using namespace std;


void print_Array(int *arr, int size){
    for(auto i=0; i<size; i++){
        cout <<arr[i] <<" ";
    }cout <<endl;
}



void reverse_Array(int *arr, int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}



int main(){
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(int);

    cout <<"Before we Reverse the Array the Array look like this" <<endl;
    print_Array(arr, size);

    cout <<endl;

    reverse_Array(arr, size);

    // Print the Array
    cout <<"After we Reverse The Array the Array look like this" <<endl;
    print_Array(arr, size);


    return 0;
}