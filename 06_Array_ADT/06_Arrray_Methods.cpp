#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[15];
    int size;
    int length;
};


// The get() function goes to the specified index and retrieves the value at that index as data
// The get() function takes two things: an array and an index, and returns the value at that index
int Get(struct Array *arr, int index){

    if(index >= 0 && index < arr->length){
        return arr->A[index];
    }

    return -1;

}


// The set() function takes three things: an array, an index, and a value, and sets the value at that specified index in the array
int Set(struct Array *arr, int index, int x){

    if(index >= 0 && index < arr->length){
        return arr->A[index] = x;
    }

    return -1;

}




// The max() function takes an array as input and returns the maximum value found in that array
int Max(struct Array *arr){

    int Largest = arr->A[0];

    for(int i=1; i<arr->length; i++){
        if(arr->A[i]> Largest){
            Largest = arr->A[i];
        }
    }

    return Largest;

}


// The min() function takes an array as input and returns the minimum value found in that array
int Min(struct Array *arr){

    int Minimum = arr->A[0];

    for(int i=1; i<arr->length; i++){
        if(arr->A[i] < Minimum){
            Minimum = arr->A[i];
        }
    }

    return Minimum;

}


// The sum() function takes an array as input and returns the total sum of all the values in that array
double Sum(struct Array *arr){

    int Total = 0;

    for(int i=0; i<arr->length; i++){
        Total = Total + arr->A[i];
    }

    return Total;

}



// The avg() function takes an array as input and returns the average (mean) of all the values in that array
int Avg(struct Array *arr){

    double Total = 0;

    for(int i=0; i<arr->length; i++){
        Total = Total + arr->A[i];
    }

    return Total/arr->length;

}



int main(){
    struct Array arr = {{2, 5, 8, 1, 6, 9, 4, 7, 3}, 15, 8};

    // Call the Get() Function
    cout <<"The Value is : " <<Get(&arr, 4) <<endl;

    // Call the Set() Function
    cout <<"The value is : " <<Set(&arr, 6, 7) <<endl;

    // Call the Max() Function
    cout <<"The Largest Value is : " <<Max(&arr) <<endl;

    // Call the Min() Function
    cout <<"The Maximum Value is : " <<Min(&arr) <<endl;

    // Call the Sum() Function
    cout <<"The Sum of Array is : " <<Sum(&arr) <<endl;

    // Call the Avg() Function
    cout <<"The Average is : " <<Avg(&arr) <<endl;

    
    return 0;
}