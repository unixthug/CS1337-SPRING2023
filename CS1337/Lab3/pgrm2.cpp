//Adam Jones || COMP 1337 || 2-5-22

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    //input file stuff
    ifstream fin;
    fin.open("data.txt");

    //vars
    int ecount;
    string currline;

    //eof loop
    while (!fin.eof()) {
        //reads in a line from file and sets it to currline
        getline(fin, currline);
        //iterates through each character in currline and checks for 'e'
        for (int i = 0; i < currline.size(); i++) {
            if (currline[i] == 'e' || currline[i] == 'E') ecount++;
        }
    }

    fin.close();

    //output
    cout << "There were " << ecount << " e's in the input file." << endl;
    
}