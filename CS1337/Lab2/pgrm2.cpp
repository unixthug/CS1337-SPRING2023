//Adam Jones || CS1337 || 1-25-23 || Ahmed

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void CountUpper(string, int&);

int main()
{
    string input;
    int upCount = 0;
    cout << "Type a phrase with multiple capital letters : " << endl;
    getline(cin, input);

    CountUpper(input, upCount);
    
    cout << "There were " << upCount << " capital letters!" << endl;
}

void CountUpper(string input, int& count)
{
    for (int i = 0 ; i < input.length() ; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            count++;
        }
    }
}