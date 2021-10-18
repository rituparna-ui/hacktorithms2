#include <iostream>
using namespace std;

int main() {
    int n;         // Initialising integer 
    long double factorial = 1.0;   // intialising a double 
    
    cout << "Enter a positive integer: "; //  Giving outout 
    cin >> n;   // Take input -: An Integer

    if (n < 0)  // condition if  n<0 --> Error output 
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {      // condition otherwise --> takes factorial
        for(int i = 1; i <= n; ++i) {
            factorial *= i;    // for loop unless i equal to n
        }
        cout << "Factorial of " << n << " = " << factorial;   // output for factorial..
    }

    return 0;
}
