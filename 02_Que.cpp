#include<bits/stdc++.h>

using namespace std;

// Given a Sentence, Count The Number Of Alphabet, Digits And Space in The Sentence

int main(){
    // Store And Then Count
    // Read One By One And Then Count

    char ch;

    ch = cin.get();

    // Count
    int alpha = 0, digits = 0, space = 0;

    while(ch != '\n'){

        if(ch >= '0' && ch <= '9'){
            digits++;
        }else if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
            alpha++;
        }else if(ch == ' ' || ch == '\t'){
            space++;
        }

        ch = cin.get();
    }

    cout <<"Total Alphabet is : " <<alpha <<endl;
    cout <<"Total digit is : " <<digits <<endl;
    cout <<"Total Space is : " <<space <<endl;


    return 0;
}