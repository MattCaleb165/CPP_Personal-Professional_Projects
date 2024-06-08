//While loop exercise

#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count = 0;
    
    const int vec_size = vec.size();
    
    for (int num : vec) {
        while (count < vec_size) {
            if (num != -99) {
                count += 1;
            }
            else {
                return count;
            };
        };
    };
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}