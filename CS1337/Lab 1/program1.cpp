//Adam Jones 1-20-23
#include <iostream>

using namespace std;

int main() 
{
    int temp;
    cout << "Please enter the current temperature of the room : " << endl;

    cin >> temp;
    if (temp > 90) {
        cout << "Visit a neighbor." << endl;
    } else if (temp > 80 && temp < 90) {
        cout << "Turn on air conditioning." << endl;
    } else if (temp > 70 && temp < 80) {
        cout << "Do nothing." << endl;
    } else if (temp > 55 && temp < 70) {
        cout << "Turn on heat." << endl;
    } else if (temp <= 55) {
        cout << "Visit a neighbor." << endl;
    }


    
}