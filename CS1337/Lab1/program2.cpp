//Adam Jones 1-20-23
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    float hrs, ohrs, wage, hpr;
    hpr = 18.25;
    cout << "Please enter the amount of hours worked : " << endl;
    cin >> hrs;

    if (hrs <= 40) {
        wage = hrs * hpr;
    } else {
        ohrs = 40.0 - hrs;
        wage = (hrs * hpr) + 1.5 * (ohrs * hpr);
    }

    cout << fixed << setprecision(2);
    cout << "Your wage from working " << hrs << " hours is $" << wage << endl;

}