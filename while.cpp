// Christian Morgan 
#include <iostream> 
using namespace std; 

int main() 
{ 

  char letter = 'a'; 

do {
		cout << "Please enter a letter. Letter x stops the program."
		     << endl;
		cin >> letter;
		cout << "The letter you entered is " << letter << endl;
	} while (letter != 'x');

	return 0;
  
  }
