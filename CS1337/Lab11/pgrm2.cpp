//Adam Jones || CS1337 || Ahmed || 4-17-23
#include <iostream>

using namespace std;
int main() {
    int n;
    cout << "Please enter the amount of array elements to create : " << endl;
    cin >> n;
    int array[n]; 
    int* pn;

    cout << "Enter " << n << " integers : " << endl;
    for (int i = 0 ; i < n ; i++) {
        cin >> array[i];
    }

    pn = &array[0];

    cout << "Result : " << endl;
    cout << '[';
    for (int i = 0 ; i<n ; i++) {
        cout << *pn;
        if (pn < &array[n-1])
            cout << ", ";
        pn++;
    }
    cout << ']' << endl;

    return 0;
}