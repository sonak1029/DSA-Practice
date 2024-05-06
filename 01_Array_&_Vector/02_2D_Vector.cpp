#include<iostream>
#include<vector>

using namespace std;

int main(){
    // 2D Vector
    vector< vector<int> > arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9, 10},
        {11, 12}
    };

    // Now to print the value
    // for(int i=0; i<arr.size(); i++){
        
    //     for(auto number : arr[i]){
    //         cout <<number <<" ";
    //     }cout <<endl;

    // }


    // Now how to update the value in 2D vector
    arr[0] [0] = 10;

    // Now to print the value
    for(int i=0; i<arr.size(); i++){
        
        for(auto number : arr[i]){
            cout <<number <<" ";
        }cout <<endl;

    }

}