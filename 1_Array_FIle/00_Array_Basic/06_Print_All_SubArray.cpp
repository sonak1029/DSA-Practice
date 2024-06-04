#include<iostream>
using namespace std;


void print_All_SubArray(int *arr, int size){

    // Print all the SubArray
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            for(int k=i; k<=j; k++){
                cout <<arr[k] <<" ";
            }cout <<endl;
        }
    }
    

}




int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    cout <<"Before we Print All the Sub array is look like this" <<endl;
    for(auto i : arr){
        cout <<i <<" ";
    }cout <<endl;

    cout <<endl;

    // Print the Array
    cout <<"After we Print All the Sub array is look like this" <<endl;
    print_All_SubArray(arr, size);


    return 0;
}