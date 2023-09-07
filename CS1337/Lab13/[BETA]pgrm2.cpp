#include <iostream>
using namespace std;

int Fibonacci (int n) {
    int temp1 = 0;
    int temp2 = 1;
    int nfib;
    int fib[500];
    for (int i = 0 ; i < 500 ; i++ ) {
        nfib = temp1 + temp2;
        fib[i] = nfib;
        temp1 = temp2;
        temp2 = nfib;
    }

    if (n > 0) {
      return fib[n-2];
    } else {
      return 0;
    }
}

int main() {
    int n;

    cout << "Please enter nth term (0-500): \n";
    cin >> n;

    cout << Fibonacci(n);
}