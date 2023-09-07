//Adam Jones || CS1337 Ahmed || 2/13/2023
#include <iostream>

using namespace std;
int main() 
{
    int n;
    cout << "Welcome to the Factorial Generator! Please enter the n! value : " << endl;
    cin >> n;
    int curr = n;

    for (int i = 1 ; i < n ; i++) {
        curr *= i;
    }

    cout << "The factorial for the inputted n! value is : " << curr << endl;
    return 0;
}