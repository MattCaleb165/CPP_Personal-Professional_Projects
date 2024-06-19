// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string secret_message;
    string encrypted_message;
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ 1234567890"};
    string key  {"X0ZNLW7EBGJHQD6YVTKFUOMP8CIASR xzn1lwe2bgj4hqd3yvt5kfuompcias9r"};
    
    cout << "State your secret message: ";
    getline(cin, secret_message);
    
    string answer;
    cout << "\n\nDo you want to encrypt your secret message? (Y/N) ";
    cin >> answer;
    
    if (answer == "Y" || answer == "y") {
        for (char letter : secret_message) {
            size_t alpha_position = alphabet.find(letter);
            if (alpha_position != string::npos) {
                char key_char = key.at(alpha_position);
                encrypted_message += key_char;
            } else {
                // If the character is not found in the alphabet, add it as is
                encrypted_message += letter;
            }
        }
    } else {
        cout << "Your message isn't going to be very secret...";
    }
    
    secret_message.erase();
    
    cout << "\n" << encrypted_message << endl;
    
    cout << "\n" << "Do you want to decrypt your message now? (Y/N) ";
    cin >> answer;
    
    if (answer == "Y" || answer == "y") {
        for (char encrypted_letter : encrypted_message) {
            size_t key_position = key.find(encrypted_letter);
            if (key_position != string::npos) {
                char alpha_char = alphabet.at(key_position);
                secret_message += alpha_char;
            } else {
                // If the character is not found in the key, add it as is
                secret_message += encrypted_letter;
            }
        }
    } else {
        cout << "Your message isn't going to be very secret...";
    }
    
    cout << "\n" << secret_message << endl;
    cout << endl;
    return 0;
}


