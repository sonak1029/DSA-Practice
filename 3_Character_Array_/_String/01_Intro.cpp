#include<bits/stdc++.h>
using namespace std;

int main(){
    // Character Array / String
    char a[] = "abcdefg"; // {'a', 'b', 'c', 'd', 'e', '\0'};

    // cout <<a <<endl;
    // cout <<strlen(a) <<endl;
    // cout <<sizeof(a) <<endl;

    char sentence[100];
    
    char temp = cin.get();

    int len = 0;

    while(temp != '\n'){
        sentence[len++] = temp;
        // Update the value of temp
        temp = cin.get();
    }

    sentence[len] = '\0';

    cout <<endl <<"Length is : " <<len <<endl;

    cout <<endl <<sentence <<endl;

    return 0;

}