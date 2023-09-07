//Adam Jones || CS1337 || Ahmed
#include <iostream>
using namespace std;

class Book {
    private:
    int ID;
    string Title;
    float Price;
    string Author;

    public:
    void setID (int id) {
        ID = id;
    }
    void setTitle (string title) {
        Title = title;
    }
    void setPrice (float price) {
        Price = price;
    }
    void setAuthor (string author) {
        Author = author;
    }
    int getID() {
        return ID;
    }
    string getTitle() {
        return Title;
    }
    float getPrice() {
        return Price;
    }
    string getAuthor() {
        return Author;
    }

    void displayBookInfo() {
        cout << "Book title:\n" << getTitle() << endl << "Book Author:\n" << getAuthor() << endl << "Book Price:\n" << getPrice() << endl << "Book ID:\n" << getID() << endl;
    }

};

int main() {
    int selection;
    int b = 0;
    bool displayMenu = true;
    bool start = true;
    char yn;

    Book b1;
    Book b2;
    Book b3;
    Book b4;
    Book b5;
    Book b6;
    Book b7;
    Book b8;
    Book b9;
    Book b10;
    Book books[10] = { b1, b2, b3, b4, b5, b6, b7, b8, b9, b10 };

    do {
        if (start) {
            cout << "Welcome to the bookstore! Please purchase a book to begin!" << endl;
            start = false;
        }
        cout << "You have purchased (" << b << ") books. Enter \"3\" to view your collection." << endl;
        cout << "1. Purchase a new book" << endl << "2. Display a purchased book by id" << endl << "3. Display all purchased books" << endl << "4. Exit" << endl;
        cin >> selection;
        if (selection == 1) {
            string fname, lname, fullname, title;
            int id;
            float price;
            cout << "Welcome to the book purchase program! Please enter the details of the book you wish to purchase : " << endl;
            cout << "Enter the author's last name : " << endl;
            cin >> lname;
            cout << "Enter the author's first name : " << endl;
            cin >> fname;
            fullname = lname + ", " + fname;
            books[b].setAuthor(fullname);
            cout << "Enter the book title : " << endl;
            cin >> title;
            books[b].setTitle(title);
            cout << "Enter the book id : " << endl;
            cin >> id;
            books[b].setID(id);
            cout << "Enter the book price (in $USD) : " << endl;
            cin >> price;
            books[b].setPrice(price);

            cout << "Information saved." << endl;
            cout << "Would you like to return to the menu? (y/n)" << endl;
            cin >> yn;
            
            if (yn == 'y' || yn == 'Y') {
                displayMenu = true;
            } else if (yn == 'n' || yn == 'N') {
                cout << "Exited succesfully" << endl;
                displayMenu = false;
            }


            b++;
        }
        if (selection == 2) {
            int qid;
            cout << "Here you can find a purchased book by the book id. Please enter the id of the book you wish to find : " << endl;
            cin >> qid;
            for (int i = 0 ; i < b ; i++) {
                if (books[i].getID() == qid) {
                    cout << "Results for " << "\"qid\" : " << endl;
                    books[i].displayBookInfo();
                }
            }
            cout << "Would you like to return to the menu? (y/n)" << endl;
            cin >> yn;
            
            if (yn == 'y' || yn == 'Y') {
                displayMenu = true;
            } else if (yn == 'n' || yn == 'N') {
                cout << "Exited succesfully" << endl;
                displayMenu = false;
            }
            
        }
        if (selection == 3) {
            cout << "Displaying Purchased Library... " << endl;
            for (int i = 0 ; i < b ; i++) {
                cout << "Book " << i+1 << ':' << endl;
                books[i].displayBookInfo();
            }
            cout << "Would you like to return to the menu? (y/n)" << endl;
            cin >> yn;
            
            if (yn == 'y' || yn == 'Y') {
                displayMenu = true;
            } else if (yn == 'n' || yn == 'N') {
                cout << "Exited succesfully" << endl;
                displayMenu = false;
            }
            
        }
        if (selection == 4) {
            cout << "Exited successfully." << endl;
            displayMenu = false;
            
        } else {
            cout << "Invalid input" << endl;
        }
    } while(displayMenu && b <= 9);


}