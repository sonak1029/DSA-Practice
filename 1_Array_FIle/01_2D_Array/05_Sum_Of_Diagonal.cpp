#include<iostream>

using namespace std;

int main(){
    // Print the sum to Diagnoal Element

    int arr[3][3] = {
        {1, 6, 4},
        {4, 8, 2},
        {8, 3, 9},
    };

    int first = 0, sec = 0;


    // First Diagnoal Sum
    for(int i=0; i<3; i++){
        first += arr[i][i];
    }

    int i = 0, j = 3-1;

    while(j >= 0){
        sec += arr[i][j];
        i++;
        j--;
    }

    cout <<first <<" " <<sec <<endl;



    return 0;
}