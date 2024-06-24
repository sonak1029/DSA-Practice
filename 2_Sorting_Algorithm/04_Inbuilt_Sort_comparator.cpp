#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    cout <<"Comparing " <<a <<" And " <<b <<endl;
    return a > b;
}


int main(){
    // Using Inbuilt Sort Comparators
    int arr[12] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 16, 11, 8};
    int size = sizeof(arr) / sizeof(int);

    sort(arr, arr + size, compare);
    // reverse(arr, arr + size);

    for(auto x : arr){
        cout <<x <<" ";
    }cout <<endl;


}