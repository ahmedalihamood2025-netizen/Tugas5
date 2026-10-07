#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    char sentence[201];

    int vowels = 0;
    int consonants = 0;
    int otherCharacters = 0;
    int wordsWithNG = 0;

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

    // count words containing "ng"
    bool insideword = false;
    bool hasNG = false;
    for (int i = 0; i <= length; i++) {
        char ch = tolower(sentence[i]); 
        if (ch >= 'a' && ch <= 'z') {
            if (!insideword) {
                insideword = true;
                hasNG = false;
            }
            if (i > 0 && tolower(sentence[i - 1]) == 'n' && ch == 'g') {
                hasNG = true;
            }
        } 
        else {
            if (insideword) {
                if (hasNG) {
                    wordsWithNG++;
                }
                insideword = false;
            }
        }
      }
      cout << "\nSentence Analysis" << endl;
      cout << "Number of characters: " << length << endl;
      cout << "Vowels: " << vowels << endl;
      cout << "Consonants: " << consonants << endl;
      cout << "Other characters: " << otherCharacters << endl;
      cout << "Words containing \"ng\": " << wordsWithNG << endl;

    return 0;
}
