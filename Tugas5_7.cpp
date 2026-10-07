#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    char sentence[201];

    int vowels = 0;
    int consonants = 0;
    int otherCharacters = 0;
    int wordswithNG = 0;

    cout << "Enter a sentence: ";
    cin.getline(sentence, 201);

    int length = strlen(sentence);
    // count vowels, consonants, and other characters
    for (int i = 0; i < length; i++) {
        char ch = tolower(sentence[i]);
        if (ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o') {
            vowels++;
        }
        else if (ch <= 'a' && ch <= 'z') {
            consonants++;
        }
        else {
            otherCharacters++;
        }
    }

    // cou
}
