//Adam Jones || CS1337 || Ahmed || 2-22-23
#include <iostream>

using namespace std;
int main()
{
    int count, query;

    int nums[10];

    cout << "Please enter 10 integers : " << endl;

    for (int i = 0 ; i < 10 ; i++) {
        cin >> nums[i];
    }

    cout << "Input an integer to check quantity : " << endl;

    cin >> query;

    for (int i = 0 ; i < 10 ; i++) {
        if (query == nums[i]) {
            count++;
        }
    }

    cout << query << " was found " << count << " times!" << endl;

    return 0;
}