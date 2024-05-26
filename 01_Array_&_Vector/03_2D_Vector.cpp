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


    // Use of "sort()" for sorting on
    // basis of no. of columns in
    // ascending order.

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


    // We are going to Initialize 3D array

    vector< vector< vector <int> > > v = {
        {{1, 2, 3}, {4, 5, 6}},
        {{7, 8, 9}, {10, 11, 12}}
    };

    // cout <<"We are going to print 3D vector " <<endl;

    // for(int i=0; i<v.size(); i++){

    //     for(int j=0; j<v[i].size(); j++){

    //         for(int k=0; k<v[i][j].size(); k++){
    //             cout <<v[i][j][k] <<" ";
    //         }cout <<endl;

    //     }
        
    // }


    // Displaying 3D vector before sorting
    cout << "The Matrix before sorting is:\n";
    for(int i=0; i<v.size(); i++){

        for(int j=0; j<v[i].size(); j++){

            for(int k=0; k<v[i][j].size(); k++){
                cout <<v[i][j][k] <<" ";
            }cout <<endl;

        }
        
    }


    // Use of "sort()" for sorting on
    // basis of no. of columns in
    // ascending order.

    sort(v.rbegin(), v.rend());

    // Displaying 3D vector after sorting
    cout << "The Matrix after sorting is:\n";
    for(int i=0; i<v.size(); i++){
        
        for(int j=0; j<v[i].size(); j++){

            for(int k=0; k<v[i][j].size(); k++){
                cout <<v[i][j][k] <<" ";
            }cout <<endl;

        }

    }

    // We are going to sum 2D vector and 3D vector
    vector< vector <int> > r = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0},
    };


    int sum = 0;

    for(int i=0; i<r.size(); i++){
        for(int j=0; j<r[i].size(); j++){
            sum += r[i][j];
        }
        cout <<sum <<" ";
    }cout <<endl;


    return 0;

}