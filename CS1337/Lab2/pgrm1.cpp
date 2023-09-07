//Adam Jones || CS1337 || 1-25-23 || Ahmed

#include <iostream>
#include <iomanip>

using namespace std;

void power (double, int);


int main()
{
    double x;
    int y;
    cout << "Please insert the base number : " << endl;
    cin >> x;
    cout << "Please insert the exponent : " << endl;
    cin >> y;
    
    power(x,y);

    return(0);
}

void power (double x, int y) 
{
    bool isNeg;
    double num = 1.0;
    if (y < 0) {
        isNeg = true;
    }
    if (isNeg) {
        for (int i = 0 ; i > y ; i--) {
        num *= 1/x;        
        }
    } else {
        for (int i = 0 ; i < y ; i++) {
        num *= x;
        }
    }
    cout << x << '^' << y << " = " << num << endl;

}
