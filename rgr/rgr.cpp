#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValid(const string& str) {
    int length = str.length();
    if (length < 5) return false;

    if (str.front() != '~' || str.back() != '~') return false;

    int index = 1;
    while (index < length && isdigit(str[index])) {
        index++;
    }

    if (str[index] != '&' && str[index] != '*') return false;
    index++;

    while (index < length - 1 && isupper(str[index])) {
        index++;
    }

    return index == length - 1 && str[index] == '~';
}

int main() {
    string userInput;
    cout << "Enter a string: ";
    cin >> userInput;

    if (isValid(userInput)) {
        cout << "The string conforms to the language L(V)." << endl;
    } else {
        cout << "The string does not conform to the language L(V)." << endl;
    }

    return 0;
}
