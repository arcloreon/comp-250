#include <iostream>
using namespace std;

int main (void)

{
	char selection;



	cout << "\n Menu";
	cout << "\n========";
	cout << "\n M - Modify Employee";
	cout << "\n D - Delete Employee";
	cout << "\n X - Exit";
	cout << "\n Enter selection: ";
	

	cin >> selection;
	switch (selection)

	{

	case 'M':
	case 'm': {cout << "\n To modify an employee"; }

			  break;

	case 'D':
	case 'd': {cout << "\n To delete an employee, Please enter Employee Number"; }

			  break;

	case 'X':
	case 'x': {cout << "\n To exit the menu"; }

			  break;

			  // other than A, M, D and X...
	default: cout << "\n Invalid selection";

		// no break in the default case

	}

	cout << "\n";
	return 0;

}

