//Adam Jones || CS1337 || Ahmed || 3-6-23

#include <iostream>

using namespace std;

void Sort (int[], const int);

int main() {
    const int size = 5;
    int array[size];

    cout << "input 5 integers : " << endl;
    for (int i = 0 ; i < size ; i++) {
        cin >> array[i];
    }

    Sort (array, size);

    for (int i = 0 ; i < size ; i++) {
        cout << array[i] << ' ';
    }


    return 0;
}

void Sort(int array[], const int N) {
    int temp;
    for (int j = 1; j < N ; j++) {
        for (int i = 0 ; i < N-1 ; i++) {
            if (array[i] > array[i+1]) {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}