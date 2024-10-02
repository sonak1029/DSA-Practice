#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[15];
    int size;
    int lenght;
};


void Display_Array(struct Array *arr3){
    
    for(int i=0; i<arr3->lenght; i++){
        cout <<arr3->A[i] <<" ";
    }cout <<endl;

}


struct Array *Merging_Array(struct Array *arr1, struct Array *arr2){

    int i=0, j=0, k=0;

    struct Array *arr3 = new Array;

    while(i<arr1->lenght && j<arr2->lenght){

        if(arr1->A[i] < arr2->A[j]){
            arr3->A[k++] = arr1->A[i++]; // Copy the smaller element from arr1 to arr3
        }else{
            arr3->A[k++] = arr2->A[j++]; // Copy the smaller element from arr2 to arr3
        }

    }

    // Copy any remaining elements from arr1
    for(; i<arr1->lenght; i++){
        arr3->A[k++] = arr1->A[i];
    }

    // Copy any remaining elements from arr2

    for(; j<arr2->lenght; j++){
        arr3->A[k++] = arr2->A[j];
    }

    arr3->lenght = arr1->lenght+arr2->lenght;
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