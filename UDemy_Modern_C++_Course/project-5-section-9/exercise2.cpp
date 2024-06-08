void find_first_vowel(const std::vector<char>& vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count = 0;
    bool vowel_found = false;
    do {
        if (vec[count] == 'a' || vec[count] == 'e' || vec[count] == 'i' || vec[count] == 'o' || vec[count] == 'u') {
            cout << "Vowel found: " << vec[count];
            vowel_found = true;
        }
        ++count;
    } while(count <= vec.size());
    
    if (!vowel_found) {
        cout << "No vowel was found";
    };
    //---- WRITE YOUR CODE ABOVE THIS LINE----
}