#include<iostream>
#include<vector>

using namespace std;

int main(){
    // Demo Vector

    vector<int> arr;
    // We check the size of vector
    cout <<"The size of vector is : " <<arr.size() <<endl;
    cout <<"The capacity of vector is : " <<arr.capacity() <<endl;

    // Now we are going to put the value in vector
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(12);
    arr.push_back(16);

    cout <<endl <<"After we put the value in vector Now we are check the size and capacity of vector" <<endl;
    cout <<"The size of vector is : " <<arr.size() <<endl;
    cout <<"The capacity of vector is : " <<arr.capacity() <<endl;

    // Now we are going to print the value
    for(auto i:arr){
        cout <<i <<" ";
    }cout <<endl;

    // how to remove the last element in this array
    arr.pop_back();

    // Now we are going to print the value
    for(auto i:arr){
        cout <<i <<" ";
    }cout <<endl;

}