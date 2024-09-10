#include<bits/stdc++.h>
#include<stdio.h>
using  namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

// This Function Display All the Element of Array
void Display(struct Array *arr){
    // Display Array
    
    for(int i=0; i<arr->length; i++){
        cout <<arr->A[i] <<" ";
    }cout <<endl;

}

// Append means just we will be inserting a new element at the end of the array
void Append(struct Array *arr, int x){
    
    if(arr->length < arr->size){
        arr->A[arr->length++] = x;
    }

}

void Insert(struct Array *arr, int index, int x){
    
    if(index >= 0 && index <= arr->length){
         // Shift elements to the right to make space
        for(int i=arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1];
        }

        // Insert the new element
        arr->A[index] = x;

        // Increment the length
        arr->length++;

    }

}


int main(){
    // Demo - Array ADT
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    // Call the Function
    Insert(&arr, 2 ,25);

    // Call the Function
    // Append(&arr, 15);

    // Call the Function
    Display(&arr);

    return 0;
}