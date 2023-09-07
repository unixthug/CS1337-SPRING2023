#include <iostream>
using namespace std;

int main() {
    int input[5];
    int temp[5];
    cout << "Please input 5 integers: " <<endl;
    for (int i=0; i<5 ; i++) {
        cin >> input[i];
    }
    for (int i=0; i<5 ; i++) {
        if(i == 0) {
            temp[i] = input[4];
        } else {
        temp[1] = input[0];
        temp[i+1] = input[i];
        }
    }
    for (int i=0; i<5 ; i++) {
        cout << temp[i] << ", ";
    }



}