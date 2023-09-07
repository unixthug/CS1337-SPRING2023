//Adam Jones || CS1337 || Ahmed
#include <iostream>
using namespace std;

int Fibonacci (int n) {
    if (n <= 1) {
        return n;
    } else {
        return Fibonacci(n-1) + Fibonacci(n-2);       
    }
}

int main() {
    int n;

    cout << "Please enter nth term of Fibonacci Sequence: \n";
    cin >> n;
    cout << "The " << n << " term is " << Fibonacci(n);
}