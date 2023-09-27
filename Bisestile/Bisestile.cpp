#include <iostream>
#include <string>

using namespace std;

bool isLeap(int year)
{
	if (year % 4 != 0)
		return false;
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	return true;
}

bool isInt(string input)
{
	if (input.size() > 9)
		return false;
	for (char i: input) 
		if (!isdigit(i)) 
			return false;
	return true;
}
	
int main()
{
	string input;
	cout << "Welcome to the leap year terminal \nPlease type the year: ";
	cin >> input;
	if (!isInt(input)) {
		cerr << "Error the input isn't correct! Try again with a smaller integer" << endl;
		return 0;
	}
	if (isLeap(stoi(input))) 
		cout << input << " is leap!" << endl;
	else
		cout << input << " isn't leap!" << endl;

	return 0;
}