#include<iostream>
using namespace std;

char square[9] = {'0','1','2','3','4','5','6','7','8' };
int player1 = 1, player2 = 2;

void mark(int player, int box) {
	if (player == 1) {
		if (box < 0 || box >8) {
			cout << "out of box count, enter again";
			cin >> box;
			mark(player1, box);
		}
		else if (square[box] == 'X' || square[box] == 'O') {
			cout << "Already filled, enter gain";
			cin >> box;
			mark(player1, box);
		}
		else
			square[box] = 'X';
	}
	else if (player == 2) {
		if (box < 0 || box >8) {
			cout << "out of box count, enter again";
			cin >> box;
			mark(player1, box);
		}
		else if (square[box] == 'X' || square[box] == 'O') {
			cout << "Already filled, enter gain";
			cin >> box;
			mark(player1, box);
		}
		else
			square[box] = 'O';

	}


}



void display() {
	for (int i = 0; i < 9; i++) {
		cout << square[i] << "\t";
		if (i == 3 || i == 6 || i == 9)
			cout << "\n";
	}
}


int checkwin() {
	//Horizontal check
	if (square[0] == square[1] && square[1] == square[2]) {
		if (square[0] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[3] == square[4] && square[4] == square[5]) {
		if (square[3] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[6] == square[7] && square[7] == square[8]) {
		if (square[6] == 'X')
			return 1;
		else
			return 2;
	}
	//verticle check
	else if (square[0] == square[3] && square[6] == square[6]) {
		if (square[0] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[1] == square[4] && square[4] == square[7]) {
		if (square[1] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[2] == square[5] && square[5] == square[8]) {
		if (square[2] == 'X')
			return 1;
		else
			return 2;
	}
	//diagonals
	else if (square[0] == square[4] && square[4] == square[8]) {
		if (square[0] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[2] == square[4] && square[4] == square[6]) {
		if (square[2] == 'X')
			return 1;
		else
			return 2;
	}
}


int main() {

	int box, result = 0, flag = 0;
	display();
	for (int i = 1; i < 5; i++) {

		cout << "\n Player " << player1 << " Enter the box: ";
		cin >> box;
		mark(player1, box);
		display();

		result = checkwin();
		if (result == 1) {
			cout << "\n Congratulations! Player " << player1 << " has won";
			flag = 1;
			break;
		}
		else if (result == 2) {
			cout << "\n Congratulations! Player " << player2 << " has won";
			flag = 1;
			break;
		}

		cout << "\n Player " << player2 << " Enter the box ";
		cin >> box;
		mark(player2, box);
		display();

		result = checkwin();
		if (result == 1) {
			cout << "\n Congratulations! Player " << player1 << " has won";
			flag = 1;
			break;
		}
		else if (result == 2) {
			cout << "\n Congratulations! Player " << player2 << " has won";
			flag = 1;
			break;
		}


	}

	if (flag == 0)
		cout << "\n Sorry! its a draw";




	return 0;
}