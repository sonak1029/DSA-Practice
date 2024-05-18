#include<iostream>
#include<utility>

using namespace std;

int main(){
    // How to create Pair
    pair<int, char> p;

    // Frist part of the pair is 
    p.first = 100;

    // second part of the pair
    p.second = 'S';

    // Print
    cout <<p.first <<" ";
    cout <<p.second <<endl;

    // Second option is how to input value from user
    pair<int, int> p1[100];

    for(int i=0; i<5; i++){
        cin >>p1[i].first >>p1[i].second;
    }cout <<endl;

    for(int i=0; i<5; i++){
        cout <<p1[i].first <<" " <<p1[i].second <<endl;
    }



    return 0;
}