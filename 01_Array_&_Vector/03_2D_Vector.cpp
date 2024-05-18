#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    // 2D Vector
    vector< vector<int> > arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    // Now how to print 2D vectors
    // for(int i=0; i<arr.size(); i++){

    //     for(int j=0; j<arr[i].size(); j++){
    //         cout <<arr[i][j] <<" "; 
    //     }cout <<endl;

    // }


    // Displaying the 2D vector before sorting
    cout << "The Matrix before sorting is:\n";
    for (int i=0; i<arr.size(); i++)
    {
        //loop till the size of particular
        //row
        for (int j=0; j<arr[i].size() ;j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }


    //Use of "sort()" for sorting on
    //basis of no. of columns in
    //ascending order.

    sort(arr.rbegin(), arr.rend());

    // Displaying the 2D vector after sorting
    cout << "The Matrix after sorting is:\n";
    for (int i=0; i<arr.size(); i++)
    {
        //loop till the size of particular
        //row
        for (int j=0; j<arr[i].size() ;j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }






    return 0;

}