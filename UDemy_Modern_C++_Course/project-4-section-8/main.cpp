// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {

		// FIRST TRY
		// int cents_provided;
		// int dollar_value = 100;
		// int quarter_value = 25;
		// int dime_value = 10;
		// int nickel_value = 5;
		// int penny_value = 1;

		// cout << "Enter an ammount in cents: ";
		// cin >> cents_provided;
		// cout << endl;

		// int dollars_change = cents_provided / dollar_value;
		// int quarters_change = (cents_provided - (dollars_change * dollar_value)) / quarter_value;
		// int dimes_change = (cents_provided - (dollars_change * dollar_value) - (quarters_change * quarter_value)) / dime_value;
		// int nickels_change = (cents_provided - (dollars_change * dollar_value) - (quarters_change * quarter_value) - (dimes_change * dime_value)) / nickel_value;
		// int pennies_change = (cents_provided - (dollars_change * dollar_value) - (quarters_change * quarter_value) - (dimes_change * dime_value) - (nickels_change * nickel_value)) / penny_value;

		// cout << "\nHere's your change:\n";\

    // cout << "dollars: " << dollars_change << endl;
		// cout << "quarters: " << quarters_change << endl;
		// cout << "dimes: " << dimes_change << endl;
		// cout << "nickels: " << nickels_change << endl;
		// cout << "pennies: " << pennies_change << endl;

		// SECOND TRY
		const int dollar_value{100};
		const int quarter_value{25};
		const int dime_value{10};
		const int nickel_value{5};
		const int penny_value{1};

		int given_amount{}, balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

		cout << "Cents to count: ";
		cin >> given_amount;

		dollars = given_amount / dollar_value;
		balance = given_amount - (dollars * dollar_value);

		quarters = balance / quarter_value;
		balance -= quarters * quarter_value;

		dimes = balance / dime_value;
		balance -= dimes * dime_value;

		pennies = balance;
		
		cout << "Dollars: " << dollars << endl;
		cout << "Quarters: " << quarters << endl;
		cout << "Dimes: " << dimes << endl;
		cout << "Nickels: " << nickels << endl;
		cout << "Pennies: " << pennies << endl;

    cout << endl;
    return 0;
}


