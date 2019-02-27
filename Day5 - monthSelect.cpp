// Kane Pickrel	
// AverysHW4
// Feb 25 2019
// Question2


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Declares callable months,variables,etc
string Months[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
int main() {
	int y;
	int m;
	int days;

	cout << "************************\n";
	cout << "Month Selector\n\n";

	cout << "Enter year (> 0):  ";
	cin >> y;
	cout << "Enter month (1-12):  ";
	cin >> m;

	cout << "Month name: " << Months[m - 1] << "\n";
	
// Check if the month and year are valid
	if (y < 0 || m > 12 || m < 1) {
		cout << "Enter a valid year or month\n";
	}

// Sets conditional statements to determine leap years and days in months
// Months with 31 days
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		days = 31;
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
			cout << "Days in month: " << days << " (A leap year)\n\n";
			
		}
		else
			cout << "Days in month: " << days << " \n\n";

	}

// Months with 30 days
	if (m == 4 || m == 6 || m == 8 || m == 9 || m == 11) {
		days = 30;
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
			cout << "Days in month: " << days << " (A leap year)\n";	
			
		}
		else
			cout << "Days in month: " << days << " \n\n";		
		
	}

// February with 28 or 29 days
		if (m == 2) {
			days = 28;
			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
				days = 29;
				cout << "Days in month: " << days << " (A leap year)\n\n";				
			}
			else
				cout << "Days in month: " << days << " \n\n";
			    
	}

	cout << "************************\n\n\n\n";
	
	
		

	system("pause");
	return 0;
	
}
