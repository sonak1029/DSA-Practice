#include<bits/stdc++.h>
using namespace std;

int main(){
    // Pair And Vector
    pair<int, string> p;
    // p = make_pair(2, "Sonak");
    p = {2, "Rupa"};
    // cout <<p.first <<" " <<p.second <<endl;

    // how to initialize more value in pair
    // pair<int, int> arr[5] = {
    //     make_pair(1, 2),
    //     make_pair(3, 4),
    //     make_pair(5, 6),
    //     make_pair(7, 8),
    //     make_pair(9, 10)
    // };

    // there is another option to initialize a pair
    pair<int, int> arr[5] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8},
        {9, 10}
    };

    // You can initialize like this
    
    // arr[0] = {1, 2};
    // arr[1] = {3, 4};
    // arr[2] = {5, 6};
    // arr[3] = {7, 8};
    // arr[4] = {9, 10};

    // for(auto x : arr){
    //     cout <<x.first <<" " <<x.second <<endl;
    // }


    

    return 0;
}