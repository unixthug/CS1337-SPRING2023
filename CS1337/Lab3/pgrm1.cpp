//Adam Jones || COMP 1337 || 2-3-22

#include <iostream>

using namespace std;

//prototype func
void box(char, int, int);

int main() 
{
    //vars
    char ch;
    int len, wid;

    //user input
    cout << "Please input a character : " << endl;
    cin >> ch;

    cout << "Please input length of box : " << endl;
    cin >> len;

    cout << "Please input width of box : " << endl;
    cin >> wid;

    //function call
    box(ch, len, wid);

    return 0;
}

//box function using for loops
void box(char ch, int len, int wid) {
    //width loop
    for (int i = 0 ; i < wid ; i++) {
        //length loop
        for (int i = 0 ; i < len ; i++) {
            cout << ch;

        }
        //new line for width
        cout << "\n";
    }

}