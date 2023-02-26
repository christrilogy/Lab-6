//performs a survey tally on beverages
// Christian Morgan

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int NUM_OPTIONS = 4; // however many options we have to choose from
	
	// the beverage choices and their respective vote tallies
	const char* drink[NUM_OPTIONS] = {"Coffee", "Tea", "Coke", "Orange Juice"};
	unsigned short int tally[NUM_OPTIONS] = {0,0,0,0};
	
	// counter for which # vote we're counting
	unsigned short int person = 1;
	
	// display survey choices
	cout << "\n  1. Coffee  2. Tea  3. Coke  4. Orange Juice\n\n";
	
	// ask for votes until given a (-1)
	for ( int input = 1 ; input != -1 ; person++ ) {
		cout << "Please input the favorite beverage of person #" << person 
		     << ":\nChoose 1, 2, 3, or 4 from the above menu"
		        " or -1 to exit the program\n";
		cin >> input;
		if ( input >= 1 and input <= NUM_OPTIONS ) {
			tally[input-1]++;  // only tally valid votes
		} else {
			if ( input != -1 ) // if invalid but not -1, warn user
				cout << "*** Invalid choice. Try again. ***\n";
			person--;          // undo counter if no vote counted
		}
	}
	
	cout << "\nBeverage         Number of Votes"
	        "\n********************************\n";
	     // "Orange Juice (17)NUMBER     (15)"
	for ( int line = 0 ; line < NUM_OPTIONS ; line++ ) {
		cout << setw(17) << left << drink[line]
		     << setw(17) << left << tally[line] << endl;
	}
	cout << endl;
	return 0;
}
