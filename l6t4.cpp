#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if (str.length() > 0) {
        if (str[0] == str[str.length() - 1]) {
            cout << "First and last characters are same.";
        }
        else {
            cout << "First and last characters are different.";
        }
    }
    else {
        cout << "String is empty.";
    }

    return 0;
}