#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word[101];

    cout << "Enter a word (maximum 100 characters): ";
    cin >> word;

    int length = strlen(word);

    cout << "Reversed word: ";

    for (int i = length - 1; i >= 0; i--) {
        cout << word[i];
    }

    bool ispalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            ispalindrome = false;
            break;
        }
    }

    if (ispalindrome) {
        cout << "\nThe word is a palindrome." << endl;
    } else {
        cout << "\nThe word is not a palindrome." << endl;
    }
    return 0;
}
