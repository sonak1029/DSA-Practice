#include<iostream>
using namespace std;


// void print_Array(int *arr, int size){
//     for(auto i=0; i<size; i++){
//         cout <<arr[i] <<" ";
//     }cout <<endl;
// }


void print_All_Pairs(int *arr, int size){

    // Print all the Element
    for(int i=0; i<size; i++){
        int x = arr[i];

        for(int j=i+1; j<size; j++){
            int y = arr[j];

            cout <<x <<" " <<y <<" is the Pair" <<endl;
            
        }cout <<endl;

    }

}




int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    cout <<"Before we Print All the pairs array is look like this" <<endl;
    for(auto i : arr){
        cout <<i <<" ";
    }cout <<endl;

    cout <<endl;

    // Print the Array
    cout <<"After we Print All the pairs array is look like this" <<endl;
    print_All_Pairs(arr, size);


    return 0;
}