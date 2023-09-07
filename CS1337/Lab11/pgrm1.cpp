//Adam Jones || CS1337 || Ahmed || 4-17-23
#include <iostream>

using namespace std;
int main() {
    int num1, num2, num3, sum;
    cout << "Please enter 3 integers : " << endl;
    cin >> num1 >> num2 >> num3;
    int* pnum1 = &num1;
    int* pnum2 = &num2;
    int* pnum3 = &num3;

    sum = *pnum1 + *pnum2 + *pnum3;

    cout << "\nSum : \n" << sum << endl;

    return 0;
}