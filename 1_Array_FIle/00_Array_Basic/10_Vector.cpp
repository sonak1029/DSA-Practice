#include<iostream>
#include<vector>

using namespace std;

int main(){
    // Demo vector
    vector<int> arr = {1, 2, 3, 4, 5};

    // pop_back O(1)
    arr.pop_back();

    // Push_back O(1)
    arr.push_back(6);

    // How to print all the Element of vector
    for(auto i : arr){
        cout <<i <<" ";
    }cout <<endl;



    // Size of the vector (No of Element)
    cout <<arr.size() <<endl;

    // Capacity of the vector 
    cout <<arr.capacity() <<endl;


}