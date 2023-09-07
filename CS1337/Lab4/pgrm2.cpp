//Adam Jones || CS1337 Ahmed || 2/13/2023
#include <iostream>

using namespace std;
void menu();
int main()
{
    int prog;
    int num1, num2, calc;
    char conf;
    bool isCalc = true;

    menu();


    do {
        cin >> prog;
        cout << "Please enter 2 integers" << endl;
        cin >> num1 >> num2;
        if (prog == 1) {
            calc = num1 + num2;
            cout << "The result is : " << calc << endl;
            cout << "Do you wish to calculate again? (y/n)" << endl;
            cin >> conf;
            isCalc = false;
            if (conf == 'y') {
                menu();
                isCalc = true;
            } else if (conf == 'n') {
                exit(0);
            }
        }
        if (prog == 2) {
            calc = num1 - num2;
            cout << "The result is : " << calc << endl;
            cout << "Do you wish to calculate again? (y/n)" << endl;
            cin >> conf;
            isCalc = false;
            if (conf == 'y') {
                menu();
                isCalc = true;
            } else if (conf == 'n') {
                exit(0);
            }
        }
        if (prog == 3) {
            calc = num1 * num2;
            cout << "The result is : " << calc << endl;
            cout << "Do you wish to calculate again? (y/n)" << endl;
            cin >> conf;
            isCalc = false;
            if (conf == 'y') {
                menu();
                isCalc = true;
            } else if (conf == 'n') {
                exit(0);
            }
        }
        if (prog == 4) {
            calc = num1 / num2;
            cout << "The result is : " << calc << endl;
            cout << "Do you wish to calculate again? (y/n)" << endl;
            cin >> conf;
            isCalc = false;
            if (conf == 'y') {
                menu();
                isCalc = true;
            } else if (conf == 'n') {
                exit(0);
            }
        }
        if (prog == 5) {
            calc = num1 % num2;
            cout << "The result is : " << calc << endl;
            cout << "Do you wish to calculate again? (y/n)" << endl;
            cin >> conf;
            isCalc = false;
            if (conf == 'y') {
                menu();
                isCalc = true;
            } else if (conf == 'n') {
                exit(0);
            }
        }
        


    } while (isCalc);

    

    return 0;
}

void menu() {
    cout << "Menu \n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n 5. Modulus" << endl;
    cout << "Enter # selection : " << endl;
}