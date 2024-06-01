#include<iostream>

using namespace std;

int main(){
    // introduction Array
    int arr[5];
    arr[0] = 27;
    arr[1] = 12;
    arr[2] = 2;
    arr[3] = 1;
    arr[4] = 34;

    // int size = sizeof(arr) / sizeof(int);
    // cout <<size <<endl;

    // Hwo to print all the value
    // for(int i=0; i<size; i++){
    //     cout <<arr[i] <<" ";
    // }cout <<endl;


    // I have another option to print the value
    // Now we are going to use For Each loop
    // for(int x : arr){
    //     cout <<x <<" ";
    // }cout <<endl;


    int marks[100];
    
    int size;
    cout <<"Enter the size of array : ";
    cin >>size;

    cout <<"The marks is : " <<endl;
    for(int i=0; i<size; i++){
        cin >>marks[i];
    }

    cout <<endl;

    for(int i=0; i<size; i++){
        cout <<marks[i] <<" ";
    }cout <<endl;


    return 0;
}