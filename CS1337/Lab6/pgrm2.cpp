//Adam Jones || CS1337 || Ahmed || 2-22-23
#include <iostream>

using namespace std;
void Reverse(char[]);
int main()
{
    char input[10];

    cout << "Please enter 10 characters to be reversed : " << endl;
    for (int i = 0 ; i < 10 ; i++) {
        cin >> input[i];
    }
    cout << "Reversing..." << endl;
    Reverse(input);

    return 0;
}

void Reverse(char base[])
{
    char reverse[10];
    for (int i = 0 ; i < 10 ; i++) {
        reverse[i] = base[9-i];
        cout << reverse[i];
    }
}