#include <iostream>
using namespace std;

int main() {
    int input[10];
    cout << "Please input 10 integers : " << endl;
    for (int i=0; i<10 ; i++) {
        cin >> input[i];
    }

    int odd[10];
    int even[10];
    int ocount = 0;
    int ecount = 0;

    for (int i=0; i<10 ; i++) {
        if (input[i]%2 != 0) {
            odd[ocount] = input[i];
            ocount++;
        }
        else {
            even[ecount] = input[i];
            ecount++;
        }
    }
    cout << "even: ";
    for (int i=0; i<ecount ; i++) {
        
        cout << even[i] << endl;
    }
    cout << "odd: " << endl;
    for (int i=0; i<ocount ; i++) {
        
        cout << odd[i] << endl;
    }


}