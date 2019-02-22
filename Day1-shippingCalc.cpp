////////////////////////////////////
// Kane Pickrel
// AverysHW3
// Feb 19, 2019
// Shipping Cost Calculator
///////////////////////////////////

// I accept your silly challenge, Doug

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

	float weight;
	char choice;

	cout << "Please enter the weight of your package:  ";
	cin >> weight;

		if (0 <= weight && weight < 1) {
			cout << "The shipping cost is $3.50\n\n";
		}
		if (1 <= weight && weight < 3) {
			cout << "The shipping cost is $5.50\n\n";
		}
		if (3 <= weight && weight < 10) {
			cout << "The shipping cost is $8.50\n\n";
		}
		if (10 <= weight && weight <= 20) {
			cout << "The shipping cost is $10.50\n\n";
		}
		if (0 > weight || weight > 20) {
			cout << "Not a valid input\n\n";
		}

	do {

		cout << "Enter new weight? (Y/N)?\n";
		cout << "You must type a 'Y' or an 'N'.\n";
		cin >> choice;
		if (choice == 'Y' || choice == 'y') {
			cout << "Please enter the another weight:  ";
			cin >> weight;
			if (0 <= weight && weight < 1) {
				cout << "The shipping cost is $3.50\n\n";
			}
			if (1 <= weight && weight < 3) {
				cout << "The shipping cost is $5.50\n\n";
			}
			if (3 <= weight && weight < 10) {
				cout << "The shipping cost is $8.50\n\n";
			}
			if (10 <= weight && weight <= 20) {
				cout << "The shipping cost is $10.50\n\n";
			}
			if (0 > weight || weight > 20) {
				cout << "Not a valid input\n\n";
			}
		}
  } while ((choice == 'Y') || (choice == 'y'));
		cout << "\nHave a nice day\n\n";
		

	system("pause");
	return 0;
}

