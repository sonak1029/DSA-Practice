#include<bits/stdc++.h>
using namespace std;


struct Array{
    int A[10];
    int size;
    int length;
};


void Swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


int Linear_Search_1(struct Array *arr, int key){

    // Searching A Element in Array
    for(int i=0; i<arr->length; i++){

        if(key == arr->A[i]){
            return i;
        }

    }

    return -1;

}


// Now Let's Improve Linear Search Using Transposition
int Linear_Search_2(struct Array *arr, int key){

    for(int i=0; i<arr->length; i++){

        if(key == arr->A[i]){
            Swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }

    }

    return -1;

}




// Now Let's Improve Linear Search Using Move to Front/head
int Linear_Search_3(struct Array *arr, int key){

    for(int i=0; i<arr->length; i++){

        if(key == arr->A[i]){
            Swap(&arr->A[i], &arr->A[0]);
            return i;
        }

    }

    return -1;

}



int main(){
    struct Array arr = {{2, 6, 9, 5, 8}, 10, 5};

    // Call The Function
    // it's A Linear Search Methode
    cout <<"Index : " <<Linear_Search_1(&arr, 5) <<endl;

    // Using Transposition methode
    cout <<"Index : " <<Linear_Search_2(&arr, 8) <<endl;

    // Using Move to Front/head Methode
    cout <<"Index : " <<Linear_Search_3(&arr, 8) <<endl;


    return 0;
}