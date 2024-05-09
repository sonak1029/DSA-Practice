#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> arr){
    // I have to two option to print the value Frist is this
    // for(auto i: arr){
    //     cout <<i <<" ";
    // }cout <<endl;

    // And second is This but we use at() Function this function is print the value
    for(int i=0; i<arr.size(); i++){
        cout <<arr.at(i) <<" ";
    }cout <<endl;

}

int main(){

    vector < vector <int> > matrix;
    int r, c;

    cin >>r >>c;

    for(int i=0; i<matrix.size(); i++){
        
        for(auto number : matrix[i]){
            cout <<number <<" ";
        }cout <<endl;

    }


    return 0;
}