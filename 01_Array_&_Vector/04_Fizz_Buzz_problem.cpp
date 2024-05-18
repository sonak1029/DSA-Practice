#include<iostream>
#include<vector>

using namespace std;


// Fizz Buzz Test
    /* Write a Fizz Buzz Fuction that returns a vector<string> with the number form 1 to n With the following restriction.
        # for Multiples of 3 store "Fizz" instead of the number
        # for Multiples of 5 store "Buzz" instead of the number 
        # for Numbers which multiples of both 3 and 5 store "FizzBuzz"
        you may use the std::to_String(number) method to convert a number into string
        
        Example 
            fizzbuzz(15) == {
                "1", "2", "Fizz", "4", "Buzz",
                "Fizz", "7", "8", "Fizz", "Buzz",
                "11", "Fizz", "13", "14", "FizzBuzz"
            } 
     */


vector<string> fizzBuzz(int n){
    
    vector<string> result;

        for(int i=1; i<=n; i++){

            if(i % 15 == 0){
                result.push_back("FizeBuzz");
            }else if(i % 5 == 0){
                result.push_back("Buzz");
            }else if(i % 3 == 0){
                result.push_back("Fizz");
            }else{
                result.push_back(to_string(i));
            }
            
        }

    return result;

}

int main(){
    vector<string> otuput = fizzBuzz(15);

    for(auto i : otuput){
        cout <<i <<" ";
    }cout <<endl;
}