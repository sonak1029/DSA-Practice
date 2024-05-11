#include<iostream>
#include<vector>

using namespace std;


void printVector(vector<char> arr){
    // I have to two option to print the value Frist is this
    for(auto i: arr){
        cout <<i <<" ";
    }cout <<endl;

    // And second is This but we use at() Function this function is print the value
    // for(int i=0; i<arr.size(); i++){
    //     cout <<arr.at(i) <<" ";
    // }cout <<endl;

}


int main(){
    // Demo Vector

    vector<char> arr;
    // We check the size of vector
    cout <<"The size of vector is : " <<arr.size() <<endl;
    cout <<"The capacity of vector is : " <<arr.capacity() <<endl;

    // Now we are going to put the value in vector
    arr.push_back('A');
    arr.push_back('B');
    arr.push_back('C');
    arr.push_back('D');
    arr.push_back('E');
    arr.push_back('F');

    cout <<endl <<"After we put the value in vector Now we are check the size and capacity of vector" <<endl <<endl;
    cout <<"The size of vector is : " <<arr.size() <<endl;
    cout <<"The capacity of vector is : " <<arr.capacity() <<endl;

    // Now we are going to print the value
    printVector(arr);

    // how to remove the last element in this array
    arr.pop_back();

    // Now we are going to print the value
    printVector(arr);

    // We are using empty() fucntion return 1 if vector is empty otherwise return 0
    // cout <<arr.empty() <<endl;

    // Now we use clear() Fucntion they remove all the element in the vector
    // arr.clear();

    // cout <<arr.empty();
    // printVector(arr);

    // now we use begin() function soo how to print the address of 0 index
    // cout <<endl <<(*arr.begin()) <<endl;
    // printVector(arr);


    // How to axis the frist value
    cout <<"The Frist value is This : " <<arr.front() <<endl;

    // Now hwo to axis the last value
    cout <<"And the Last value is This : " <<arr.back() <<endl;

    // how Insert() function work let's check
    arr.insert(arr.begin()+2, 'Z');
    printVector(arr);

    arr.erase(arr.begin()+2);
    printVector(arr);


    // Now how to swap a Number
    // vector<int> arr_1 = {10, 20 , 30 , 40 , 50};
    // vector<int> arr_1;
    // arr_1.push_back(100);
    // arr_1.push_back(20);
    // arr_1.push_back(80);
    // arr_1.push_back(90);
    // arr_1.push_back(50);

    // arr_1.insert(arr_1.begin()+3, 80);
    // printVector(arr_1);

    // How to swap
    // arr.swap(arr_1);
    // printVector(arr);
    // printVector(arr_1);

    // cout <<endl;

    // printVector(arr_1);

    // How many value insert in vector
    // cout <<arr.max_size() <<endl;

    // arr.clear();
    // arr_1.clear();
    // printVector(arr);
    // printVector(arr_1);

    return 0;

}