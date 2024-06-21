#include <iostream>
#include <string>

using namespace std;

int main() {
    string user_input;

    cout << "Enter something to make the tree from: ";
    cin >> user_input;

    int input_length = user_input.length();
    string spaces (input_length-1, ' ');
    
    cout << spaces << "." << endl;
    
    // int count = 0;
    // for (int i = 0; i < (input_length); i++) {
    //     cout << i << endl;
        
}