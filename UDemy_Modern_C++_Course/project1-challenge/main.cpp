#include <iostream>

int main() {

  int user_input;

  std::cout << "What's your favorite number, between 1 and 100: ";

  std::cin >> user_input;

  std::cout << "Amazing!! That's my favorite number too!\nNo really!! " << user_input << " is my favorite number!" << std::endl;
  //Reference var in string
	
  return 0;
}