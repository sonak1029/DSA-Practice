#include<iostream>
using namespace std;

bool compare(int a, int b){
    cout <<"Comparing " <<a <<" And " <<b <<endl;
    return a > b;
}

// Bubble sort Algorithum

void bubble_Sort(int *arr, int size){
    
    for(int i=1; i<=size-1; i++){ // i=1 1<=4
        // Repeted Swaping
        // And this loop will go for index n-2
        for(int j=0; j<=size-1-i; j++){ // j=0 0<=3 1<=3 2<=3 3<=3
            if(compare(arr[j], arr[j+1])){// 5 > 1
                swap(arr[j], arr[j+1]); // 4 5 3 2 1 // 4 3 5 2 1 // 4 3 2 5 1 // 4 3 2 1 5
            }
        }
        cout <<endl;
    }

}



int main(){
    // Bubble sort Algorithm
    int arr[9] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    bubble_Sort(arr, size);

    for(auto x : arr){
        cout <<x <<" ";
    }cout <<endl;

    return 0;

}