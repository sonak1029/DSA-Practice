#include<iostream>
using namespace std;


int binary_Search(int *arr, int size, int key){

    int start = 0;
    int end = size-1;

    while(start < end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return -1;

}





int main(){
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(int);

    int key;
    cout <<"Enter the value to search for : ";
    cin >>key;

    cout <<"The Value is present at Index : " <<binary_Search(arr, size, key) <<endl;



    return 0;
}