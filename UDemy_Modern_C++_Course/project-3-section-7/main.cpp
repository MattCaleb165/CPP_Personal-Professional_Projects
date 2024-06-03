//Vectors
//vector <char> vowels {'a', 'e', 'o'}
//vector <int> name {100, 98}
//vector <double> name {300, 98.0}

//Vectors are dynamic in size
//Elements are all the same size
//All elements in vector are initialized to 0 by default
//Same syntax as arrays for accessing the info; no bounds checking is done when using the same as array

//vector_name.at(element_index) - bounds checking
//Exampe: test_score.at(1)

//Vector has a method called "push_back" that adds an element at the end of the vector
//example: test_score.push_back(90); - adds "90" to the end of the vector

//If you go out of bounds, c++ will show an error message about it

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

  cout << vowels[0] << endl;
  cout << vowels[4] << endl;

  // vector <int> test_scores (3); // 3 elements all initialized to zero
  // vector <int> test_scores (3, 100); // 3 elements all initialized to 100

  vector <int> test_scores {100, 98, 89};

  //Array syntax example to show vector interactions
  cout << "\nTest scores using array syntax:" << endl;
  cout << test_scores[0] << endl;
  cout << test_scores[1] << endl;
  cout << test_scores[2] << endl;
  cout << endl;


  //True vector synax using the appropriate method
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

}
