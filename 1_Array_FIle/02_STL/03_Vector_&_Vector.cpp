#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<pair<int, int> > arr){
    for(auto x : arr){
        cout <<x.first <<" " <<x.second <<endl;
    }

}

int main(){
    vector<pair<int, int> > v = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    printVector(v);
    
    return 0;
}