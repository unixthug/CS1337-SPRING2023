//Adam Jones || CS1337 || Ahmed
#include <iostream>
using namespace std;

int ArraySum(int A[], int N) {
    int temp = N;
    if (N <= 0) {
        return A[N];
    } else {
        return A[temp] + ArraySum(A, N-1);
    }
}

int main() {
    int len;
    cout << "How many #'s in the array? : \n";
    cin >> len;
    int array[len];
    cout << "Enter " << len << " integers : \n";
    for(int i = 0; i < len ; i++) {
        cin >> array[i];
    }
    cout << "Sum of integers : \n";
    cout << ArraySum(array, len);

    return 0;
}