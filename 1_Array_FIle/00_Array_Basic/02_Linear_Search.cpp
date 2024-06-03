#include<iostream>
#include<string>
using namespace std;


int linear_Search(int arr[], int size, int target){

    for(int i=0; i<size; i++){
        // Check if Current Element Match with the target;
        if(arr[i] == target)
            return i;
    }

    // Out of the loop
    return -1;

}



int main(){
    // Linear_Search Problem
    // int arr[] = {1, 2, 0, 10, 11, 9, 8, 8, 7};

    // int size = sizeof(arr) / sizeof(int);


    // int target;
    // cout <<"Enter the Target : ";
    // cin >>target;

    
    // cout <<"The index is : " <<linear_Search(arr, size, target) <<endl;


    // Create String

    // Empty String
    string str;

    cout <<"str is : " <<str <<endl;
    
    // Check the size
    cout <<"Size : " <<str.size() 
         <<" Length : " <<str.length() 
         <<" Capacity : " <<str.capacity() <<endl;


    // "H" Only one Character
    str = "H";
    cout <<"str is : " <<str <<endl;
    cout <<"Size : " <<str.size() 
         <<" Length : " <<str.length() 
         <<" Capacity : " <<str.capacity() <<endl;


    return 0;
}