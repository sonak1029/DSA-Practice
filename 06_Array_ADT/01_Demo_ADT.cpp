#include<bits/stdc++.h>
#include<stdio.h>
using  namespace std;

struct Array{
    // int *A;
    int A[20];
    int size;
    int length;
};


void Display(struct Array arr){
    // Print All the Element
    cout <<"Element Are : " <<endl;
    for(int i=0; i<arr.length; i++){
        cout <<arr.A[i] <<" ";
    }cout <<endl;
}


int main(){
    // Demo - Array ADT
    struct Array arr = {{2, 4, 5, 6}, 20, 5};
    // int n;

    // // Taking input for the size of the array
    // cout <<"Enter Size of an Array : ";
    // cin >>arr.size;

    // // Dynamically allocating memory for the array based on the input size
    // arr.A = new int[arr.size];

    // // Initializing the length of the array
    // arr.length = 0;


    // cout <<"Enter Number of Number ";
    // cin >>n;

    // // Input the Value
    // cout <<"Enter All The Element : " <<endl;
    // for(int i=0; i<n; i++){
    //     cin >>arr.A[i];
    // }

    // arr.length = n;

    Display(arr);

    // // Just to confirm, let's print the size
    // cout << "Array of size " << arr.size << " created successfully." << endl;

    return 0;
}