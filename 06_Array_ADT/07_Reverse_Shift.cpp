#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[15];
    int size;
    int length;
};


void Display_Array(struct Array *arr){

    for(int i=0; i<arr->length; i++){
        cout <<arr->A[i] <<" ";
    }cout <<endl;

}


// 1
// Reverse The Array
void Reverse_Array(struct Array *arr){

    int start = 0, end = arr->length-1;

    while(start <= end){
        swap(arr->A[start], arr->A[end]);
        start++;
        end--;
    }

}


// 2
// Left Shift Array
void Left_Shift(struct Array *arr){

    for(int i=0; i<arr->length; i++){
        arr->A[i] = arr->A[i+1];
    }
    arr->length--;

}



// 3
// Left Rotate Array
void Left_Rotate(struct Array *arr){

    // Store the first element
    int temp = arr->A[0];

    for(int i=0; i<arr->length; i++){
        arr->A[i] = arr->A[i+1];
    }

    // Move the first element to the last position
    arr->A[arr->length-1] = temp;
    

}


// 4
// Right Rotate Array
void Right_Shift(struct Array *arr){
    
    for(int i=arr->length; i>0; i--){
        arr->A[i] = arr->A[i-1];
    }

    arr->A[0] = 0;
    

}


// 5
// Right Rotate Array
void Right_Rotate(struct Array *arr){

    // Store the first element
    int temp = arr->A[arr->length-1];

    for(int i=arr->length; i>0; i--){
        arr->A[i] = arr->A[i-1];
    }

    // Move the first element to the last position
    arr->A[0] = temp;
    

}


int main(){
    struct Array arr = {{2, 6, 1, 3, 8, 7, 4, 9}, 15, 8};

    // Call the Function
    Display_Array(&arr);

    // Reverse The Array
    // Reverse_Array(&arr);
    // Left_Shift(&arr);
    // Left_Rotate(&arr);
    // Right_Shift(&arr);
    Right_Rotate(&arr);

    // Again We Print
    Display_Array(&arr);

    return 0;
}