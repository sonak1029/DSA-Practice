#include<bits/stdc++.h>
using namespace std;


int Binary_Search(int arr[], int start, int end, int key){
    // Debugging: Print the current search range
    cout << "Searching between index " << start << " and " << end << endl;

    // Base case: If low is greater than high, element is not present
    if (start <= end){
        int mid = start + (end - start) / 2;

        // Debugging: Print the mid value
        cout << "Mid index: " << mid << ", Mid value: " << arr[mid] << endl;

        // Check if the middle element is the target
        if(key == arr[mid]){
            cout << "Element found at index " << mid << endl;  // Debugging: Element found
            return mid;
        }

        // If target is smaller, search the left half
        else if(key < arr[mid]){
            cout << "Searching left half" << endl;  // Debugging: Searching left
            return Binary_Search(arr, start, mid-1, key);
        }else{
            // If target is larger, search the right half
            cout << "Searching right half" << endl;  // Debugging: Searching right
            return Binary_Search(arr, mid + 1, end, key);
        }

    }

    cout << "Element not found!" << endl;  // Debugging: Element not found
    return -1;  // If element is not present, return -1

}



int main(){
    int arr[] = {4, 8, 10, 15, 17, 18, 21, 24, 29, 33, 34, 37, 39, 41, 42};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;


    cout <<Binary_Search(arr, 0, n-1, 18) <<endl;

    return 0;
}