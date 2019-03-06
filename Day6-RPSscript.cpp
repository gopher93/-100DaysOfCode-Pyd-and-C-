#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
	
	int p_one; 
	int p_two;
	char choice;
	srand(time(NULL));

	cout << "*******************************\n";
	cout << "Rock, Paper, Scissors Game\n";
	cout << "*******************************\n\n";

	do {
		cout << "Player One, make your move (Rock (1), Scissors (2), Paper (3)):  ";
		cin >> p_one;
		

		p_two = rand() % 3 + 1;
		cout << "\nPlayer 2 has chosen: " << p_two << endl;

		// rock = 1 , scissors = 2, paper = 3

		// Draw matches
		if (p_one == 1 && p_two == 1) {
			cout << "Game is a draw \n\n";
		}

		else if (p_one == 2 && p_two == 2) {
			cout << "Game is a draw \n\n";
		}

		else if (p_one == 3 && p_two == 3) {
			cout << "Game is a draw \n\n";
		}


		// All player 1 wins
		else if (p_one == 1 && p_two == 2) {
			cout << "Player 1 wins: The rock smashes the scissors \n\n";
		}

		else if (p_one == 2 && p_two == 3) {
			cout << "Player 1 wins: The scissors cuts the paper \n\n";
		}

		else if (p_one == 3 && p_two == 1) {
			cout << "Player 1 wins: The paper wraps the rock \n\n";
		}


		// All player 2 wins
		else if (p_one == 1 && p_two == 3) {
			cout << "Player 2 wins: The rock smashes the scissors \n\n";
		}

		else if (p_one == 3 && p_two == 2) {
			cout << "Player 2 wins: The scissors cuts the paper \n\n";
		}

		else if (p_one == 2 && p_two == 1) {
			cout << "Player 2 wins: The paper wraps the rock \n\n";
		}

		else if (0 > p_one || p_one > 3) {
			cout << "You didn't select choices 1,2,or 3\n\n";
		}

		cout << "Play another game? (Y/N)?:  ";
		
		cin >> choice;
	} while ((choice == 'Y') || (choice == 'y'));
		cout << "\nHave a nice day\n\n";


	system("pause");
	return 0;
}