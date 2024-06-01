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


    /* pair<string, int> demo;

    // Two Methode insert
    demo = make_pair("Sonak", 1029);

    // Suppose user will give me this type of detail means
    // Name, Age & Waight
    // How to solve
    pair<string, pair<int, double>> p;

    // We are going to fill the value
    // This one is frist option
    p.first = "Sonak";
    p.second.first = 18;
    p.second.second = 46.50;

    cout <<p.first <<" " <<p.second.first <<" " <<p.second.second <<endl;

    // Now we are going to use second option
    p = make_pair("Rupa", make_pair(18, 44));

    cout <<p.first <<" " <<p.second.first <<" " <<p.second.second <<endl;
    */


    return 0;
}