#include <iostream>
using namespace std;

int main(){

    char userInput;

    cout << "Enter a character: ";
    cin >> userInput;

    if (userInput == 'a'|| userInput == 'e' || userInput == 'i' || userInput == 'o' || userInput == 'u'){
        cout << userInput << " is a vowel.";
    } else if ((isalpha(userInput)) && (userInput != 'a'|| userInput != 'e' || userInput != 'i' || userInput != 'o' || userInput != 'u')){
        cout << userInput << " is a consonant.";
    } else if (ispunct(userInput)){
        cout << userInput << " is a punctuation.";
    } else if (isdigit(userInput)){
        cout << userInput << " is a digit.";
    } else {
        cout << userInput << " is unrecognised.";
    }
}