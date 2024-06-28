#include<iostream>
#include<vector>
using namespace std;


void counting_Sort(int *arr, int size){

    // Find out the Largest Element soo that we get to know about the range
    int largest = -1;
    for(int i=0; i<size; i++){
        largest = max(largest, arr[i]);
    }

    // Then we create a Count Array
    vector<int> freq(largest + 1, 0);

    // Update the Frequency Array
    for(int i=0; i<size; i++){
        freq[arr[i]]++;
    }

    // Put Back The Element From Frequcncy Into Original Array

    int j = 0;
    for(int i=0; i<=largest; i++){

        while(freq[i] > 0){
            arr[j] = i;
            freq[i]--;
            j++;
        }

    }

    return;

}



int main(){
    int arr[11] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int size = sizeof(arr) / sizeof(int);

    counting_Sort(arr, size);

    for(int x : arr){
        cout <<x <<" ";
    }cout <<endl;

    return 0;

}