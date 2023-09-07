//Adam Jones || CS1337 || Ahmed || 4-2-23

#include <iostream>
using namespace std;

class Student 
{
    private:
    int ID;
    string Name;
    float GPA;
    string phoneNumber;

    public:
    void setID(int id) {
        ID = id;
    }
    void setName(string name) {
        Name = name;

    };
    void setGPA(float gpa) {
        GPA = gpa; 
    }
    void setphoneNumber(string number) {
        phoneNumber = number;
    }
    int getID() {
        return ID;
    }
    string getName() {
        return Name;
    }
    float getGPA() {
        return GPA;
    }
    string getphoneNumber() {
        return phoneNumber;
    }
    void displayStudentInfo() {
        cout << "The student id is " << getID() << ", name is " << getName() << ", GPA is " << getGPA() << ", and phone number is " << getphoneNumber() << endl;
    }

};

int main() {

    Student Student1;
        Student1.setID(45576);
        Student1.setName("Adam Jones");
        Student1.setGPA(3.40);
        Student1.setphoneNumber("111-222-3334");

    Student Student2;
        Student2.setID(28849);
        Student2.setName("Josiah");
        Student2.setGPA(3.50);
        Student2.setphoneNumber("344-234-5694");

    Student Student3;
        Student3.setID(34598);
        Student3.setName("Bobby");
        Student3.setGPA(1.34);
        Student3.setphoneNumber("231-345-5523");

    Student Student4;
        Student4.setID(34095);
        Student4.setName("Sylvester");
        Student4.setGPA(4.20);
        Student4.setphoneNumber("231-243-2342");

    Student Student5;
        Student5.setID(24579);
        Student5.setName("Bryce");
        Student5.setGPA(2.80);
        Student5.setphoneNumber("552-452-6632");
    Student Students[5] = {Student1, Student2, Student3, Student4, Student5};
    for (int i=0 ; i < 5 ; i++) {
        Students[i].displayStudentInfo();
    }
    return 0;

}