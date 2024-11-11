#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[15];
    int size;
    int length;
};


void Display_Array(struct Array *arr3){
    
    for(int i=0; i<arr3->length; i++){
        cout <<arr3->A[i] <<" ";
    }cout <<endl;

}


struct Array *Merging_Array(struct Array *arr1, struct Array *arr2){

    int i=0, j=0, k=0;

    struct Array *arr3 = new Array;

    while(i<arr1->length && j<arr2->length){

        if(arr1->A[i] < arr2->A[j]){
            arr3->A[k++] = arr1->A[i++]; // Copy the smaller element from arr1 to arr3
        }else{
            arr3->A[k++] = arr2->A[j++]; // Copy the smaller element from arr2 to arr3
        }

    }

    // Copy any remaining elements from arr1
    for(; i<arr1->length; i++){
        arr3->A[k++] = arr1->A[i];
    }

    // Copy any remaining elements from arr2

    for(; j<arr2->length; j++){
        arr3->A[k++] = arr2->A[j];
    }

    arr3->length = arr1->length+arr2->length;
    arr3->size = 10;

    return arr3;


}



int main(){
    struct Array arr1 = {{3, 8, 16, 20, 25}, 10, 5};
    struct Array arr2 = {{4, 10, 12, 22, 23}, 10, 5};

    // Merging Two Array in Third Array
    struct Array *arr3;

    // Call The Merge Function
    arr3 = Merging_Array(&arr1, &arr2);

    // Call the Function Array Three
    Display_Array(arr3);

    return 0;
}