#include<bits/stdc++.h>
using namespace std;

// Practice Question
// Q : 1
// Find Displacement : Given a long route containing N, S, E, W Directions, Find The Sortest Path To Reach The Location.

// Simple Input
// SNNNEWE

// Simple Output
// NNE


int main(){
    char route[1000];

    cin.getline(route, 1000);

    int x = 0, y = 0;

    for(int i=0; route[i] != '\0'; i++){

        switch (route[i]){

        case 'N' : y++;
                break;
        
        case 'S' : y--;
                break;

        case 'E' : x++;
                break;

        case 'W' : x--;
                break;

        }

    }

    cout <<"Final X And Y is : " <<x <<"," <<y <<endl;

    if(x>=0 && y>=0){
        while(y--){
            cout <<"N";
        }

        while(x--){
            cout <<"E";
        }
    }

    cout <<endl;


    return 0;
}