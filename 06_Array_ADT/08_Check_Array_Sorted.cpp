#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[15];
    int size;
    int length;
};


// Display Array
void Display(struct Array *arr){
    for(int i=0; i<arr->length; i++){
        cout <<arr->A[i] <<" ";
    }cout <<endl;
}



// Delete A value in Sorted Array
void Delete_Element(struct Array *arr, int index){

    int x = 0;

    if (index >= 0 && index < arr->length){
        x = arr->A[index];
        for(int i=index; i<arr->length; i++){
            arr->A[i] = arr->A[i+1];
        }
    
        arr->length--;
    
    }

}



// Insert A value in Sorted Array
void Insert_Element(struct Array *arr, int value){

    int i = arr->length-1;

    while(arr->A[i] > value){
        arr->A[i+1] = arr->A[i];
        i--;
    }

    arr->A[i+1] = value;
    arr->length++;

}



// Check Whether A Positive Number is Sorted Or Not
bool Algorithum_is_Sorted(struct Array *arr){

    for(int i=0; i<arr->length-1; i++){
        if(arr->A[i] > arr->A[i+1]){
            return false;
        }
    }

    return true;

}



// Check Whether A Negative Number is Sorted Or Not
void Sorted_Positive_Or_Negative(struct Array *arr){

    int i=0, j = arr->length-1;

    while(i < j){

        // Check Number is Positive or Not
        while(arr->A[i] < 0){
            i++;
        }

        // Check Number is Negative Or Not
        while(arr->A[j] >= 0){
            j--;
        }

        // Swap The Number
        if(i<j){
            swap(arr->A[i], arr->A[j]);
        }

    }

}



int main(){
    struct Array arr = {{4, 8, 13, 16, 20, 25, 28, 33}, 15, 8};
    // struct Array arr = {{-4, -8, 13, 16, -20, 25, -28, 33}, 15, 8};

    // Display Array
    Display(&arr);

    // Call The Function
    // Insert_Element(&arr, 18);

    // Call The Function Delete A value in sorted Array
    Delete_Element(&arr, 3);

    // Check in Positive Number is Sorted Or Not
    // cout <<Algorithum_is_Sorted(&arr) <<endl;


    // Check in Negative Number or Positive number is Sorted Or Not
    Sorted_Positive_Or_Negative(&arr);

    // Display Array
    Display(&arr);


    return 0;
}