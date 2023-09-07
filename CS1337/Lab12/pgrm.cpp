//Adam Jones || CS1337 || Ahmed
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* link;
};

class IntegerLinkedList {
    private:
        Node* head;
        int counter;
    public:
    IntegerLinkedList() {
		head = NULL;
		counter = 0;
	}
    void createNode(int value) {
        counter++;
        Node * NewNode = new Node;
        NewNode->data = value;
        NewNode->link = NULL;
        if (head != NULL) {
            Node * EndNode = head;
            while (EndNode->link != NULL) {
                EndNode = EndNode->link;
            }
            EndNode->link = NewNode;
        }
        else {
        head = NewNode;
        }

    }
    void display() {
        cout << "Displaying List...\n";
        Node * temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << "\n";
    }
};

int main() {
    int n1, n2, n3, n4, n5;
    IntegerLinkedList ILL;    
    cout << "Enter 5 integers : \n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    ILL.createNode(n1);
    ILL.createNode(n2);
    ILL.createNode(n3);
    ILL.createNode(n4);
    ILL.createNode(n5);
    ILL.display();




}