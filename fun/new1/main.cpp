#include <iostream>

using namespace std;

int main() {
  string character_name;
  int selection;
  bool flag;

  cout << "Hello Traveler, what's your name: ";

  cin >> character_name;

  cout << "\n\nPleased to meet you " << character_name << "!" << endl;

    cout << "\nMain Menu\n1. Hear a joke\n2. Play a guessing game\n3. Exit" << endl;

    cout << "\nSelect the number corresponding with the action you'd like to take: ";

    cin >> selection;
    do {
      switch (selection) {
        case '1':
          cout << "\nJoke\n\n" << endl;
          break;
        case '2':
          cout << "\nGuess what\n\n" << endl;
          break;
        case '3':
          cout << "\nOh.. Okay.\n\n" << endl;
          flag = false;
          break;
         default:
          cout << "\nNot a valid selection.\n\n";
          break;
        }
      }while (flag);
    cout << "Thanks for visiting!";
}