//Adam Jones || CS1337 || Ahmed
#include <iostream>
using namespace std;

int sum(int n) {
    if (n > 0) {
      return n + sum(n - 1);
    } else {
      return 0;
    }
}

int main() {
    int n;
    cout << "Enter n : \n";
    cin >> n;
    cout << "Sum : \n";
    int result = sum(n);
    cout << result;
    return 0;
}
