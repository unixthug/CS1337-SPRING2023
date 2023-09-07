//Adam Jones || CS1337 || Ahmed || 2-20-23

#include <iostream>

using namespace std;

int main() 
{
    enum dayOfWeek { monday, tuesday, wednesday, thursday, friday, saturday, sunday };

    dayOfWeek num;
    num = monday;
    for (int i = 0 ; i < 7 ; i++) {
        switch (num) {
            case monday : 
            cout << "The first day of the week is Monday" << endl;
            break;
            case tuesday : 
            cout << "The second day of the week is Tuesday" << endl;
            break;
            case wednesday : 
            cout << "The third day of the week is Wednesday" << endl;
            break;
            case thursday : 
            cout << "The fourth day of the week is Thursday" << endl;
            break;
            case friday : 
            cout << "The fifth day of the week is Friday" << endl;
            break;
            case saturday : 
            cout << "The sixth day of the week is Saturday" << endl;
            break;
            case sunday : 
            cout << "The seventh day of the week is Sunday" << endl;
            break;
            
            default: 
            cout << "ERROR" << endl;
            
        }
        num = dayOfWeek(num + 1);
    }


    return 0;
}