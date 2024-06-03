
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>
#include <iomanip> // Include the iomanip library

using namespace std;

int main() {
    int small_rooms_to_clean;
    int large_rooms_to_clean;
    int small_cost = 25;
    int large_cost = 35;

    std::cout << "Hello and welcome to Frank's Carpet Cleaning Service!\n\nHow many small rooms would you like cleaned? ";
    std::cin >> small_rooms_to_clean;
    std::cout << "\nHow many large rooms would you like cleaned? ";
    std::cin >> large_rooms_to_clean;

    double base_cost = (small_rooms_to_clean * small_cost) + (large_rooms_to_clean * large_cost);
    double tax_cost = (base_cost * .06);
    double total_cost = (tax_cost + base_cost);

    std::cout << fixed << setprecision(2); // Set the output to display 2 decimal places

    std::cout << "\n\nEstimate for carpet cleaning service\n";
    std::cout << "Number of small rooms: " << small_rooms_to_clean << "\n";
    std::cout << "Number of large rooms: " << large_rooms_to_clean << "\n";
    std::cout << "Price per small room: $" << small_cost << "\n";
    std::cout << "Price per large room: $" << large_cost << "\n";
    std::cout << "Cost : $" << base_cost << "\n";
    std::cout << "Tax : $" << tax_cost << "\n";
    std::cout << "====================================\n";
    std::cout << "Total estimate: $" << total_cost << "\n";
    std::cout << "This estiamte is valid for 30 days";
    cout << endl;
    return 0;
}

