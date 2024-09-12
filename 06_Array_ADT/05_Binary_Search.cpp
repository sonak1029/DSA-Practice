#include<bits/stdc++.h>
using namespace std;


struct Array{
    int A[15];
    int size;
    int length;
};


int Binary_Search(struct Array *arr, int key){

    // Searching for a  Element in Array using Binary Search
    int start = 0, end = arr->length-1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr->A[mid] == key){
            return mid;
        }else if(key < arr->A[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return -1;

}



int main(){
    struct Array arr = {{4, 8, 10, 15, 18, 21, 25, 33, 34, 37, 39, 41}, 15, 15};

    // Call The Function
    // it's A Binary Search Methode
    cout <<"Index : " <<Binary_Search(&arr, 18) <<endl;


    return 0;
}