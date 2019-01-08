#include <iostream>
#include <string>
using namespace std;
int accumulate(int, string, bool);

int main() {

	int userInput;
	string preferredOperation;
	bool withMultiple = true;
	string response;

	//Ask user for int number
	do{
		cout << "Enter any number you want to calculate the sum or product to: ";
		cin >> userInput; //store input

		//ensure input is always an integer..eg string shouldn't work
		while(cin.fail())		//while(!cin)
		{
			// user didn't input a number
			cin.clear();	 // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
			// next, request user reinput
			cout << "Enter any number you want to calculate the sum or product to: ";
			cin >> userInput;
		}
	}  while (userInput < 0);

	while(true) {
		cout << "Do you want to compute the sum or product? "; //store choice of Operation
		cin >> preferredOperation;
		if (preferredOperation == "sum" || preferredOperation == "product") { break; }
	} 

	while(true) {
		cout << "Should your calculation include multiples of 3 and 5 (Yes or No) ";
		cin >> response;
		if (response == "Yes" || response == "No") { break; }
	}

	if (response == "No"){
		withMultiple = false; //that is ignore multiple of 3 and 5 in calculation
	}
	cout << accumulate(userInput, preferredOperation, withMultiple) <<endl;
	system("pause");
	return 0;
}

//function to calculate product or sum from 1 to userInput
int accumulate(int userInput, string preferredOperation, bool withMultiple) {
	int sum = 0;
	int product = 1;
	int result;

	for (int i = 1; i < userInput + 1; i++) {
		if (withMultiple == false) {
			if (i % 3 == 0 || i % 5 == 0) { //checks if number is a multiple of 3 or 5
				continue;
			}
		}
		if (preferredOperation == "sum") {
			sum += i;
			result = sum;
		}
		else if (preferredOperation == "product") {

			product *= i;
			result = product;
		}
	}

	return result;
}
