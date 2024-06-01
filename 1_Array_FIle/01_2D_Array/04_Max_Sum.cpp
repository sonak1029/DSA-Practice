#include<iostream>

using namespace std;


int main(){
    // Print Row Index with max Sum
    int arr[5][4] = {
        {3, 4, 7, 8},
        {2, 8, 3, 9},
        {5, 4, 2, 2},
        {7, 3, 5, 8},
        {2, 8, 9, 1},
    };

    int sum = INT16_MIN;
    int index = -1;

    for(int i=0; i<5; i++){
        int total = 0;
        for(int j=0; j<4; j++){
            total += arr[i][j];
            if(sum < total){
                sum = total;
                index = i;
            }
        }
    }
    cout <<"Sum is : " <<sum  <<" and index is : " <<" " <<index <<endl;


    return 0;
}