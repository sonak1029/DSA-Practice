#include<bits/stdc++.h>
using namespace std;


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


void Delete(struct Array *arr, int index){

    // first Methode to delete the index
    
    // for(int i=index; i<arr->length; i++){
    //     arr->A[i] = arr->A[i+1];
    // }
    // arr->length--;

    // Second Methode
    int x = 0;

    if(index >= 0 && index <= arr->length){

        x = arr->A[index];

        for(int i=index; i<arr->length; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;

    }

}


int main(){
    struct Array arr = {{2, 6, 9, 5, 8}, 10, 5};

    // Call The Function
    Delete(&arr, 2);


    // Print All the Value
    Display(&arr);


    return 0;
}