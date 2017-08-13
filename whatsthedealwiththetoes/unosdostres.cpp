#include "std_lib_facilities.h"
// i'm making an edit to push

// JJ editing shit yo
int gridValues[3][3];
int column;
int row;

void printGrid() {	// this should print out an ascii grid containing the values stored in the array
	cout << "   |   |\n"
		<< " " << gridValues[0][0] << " | " << gridValues[0][1] << " | " << gridValues[0][2] << endl
		<< "   |   |\n"
		<< "---+---+---\n"
		<< "   |   |\n"
		<< " " << gridValues[1][0] << " | " << gridValues[1][1] << " | " << gridValues[1][2] << endl
		<< "   |   |\n"
		<< "---+---+---\n"
		<< "   |   |\n"
		<< " " << gridValues[2][0] << " | " << gridValues[2][1] << " | " << gridValues[2][2] << endl
		<< "   |   |\n\n";
}

void checkCoord(int coord) {
	if (coord > 3) {
		cout << "Invalid coordinate, you broke me.\n";
		cout << "Re-enter coordinate:\n";
		cin >> coord; // why does it bug out tho?
	}
}

int main() {
	printGrid();
	for (int turn = 1; turn < 10; turn++) {  // this should run the game for nine turns
		cout << "This is turn number " << turn << endl; // only for testing the loop while there's no interactivity
		if (turn % 2 == 0) {
			cout << "Enter the 2 coordinates (1-3) player 2:\n";
			cin >> column >> row;
			checkCoord(column);
			checkCoord(row);
			column--;
			row--;
			gridValues[column][row] = 2;
		}
		else {
			cout << "Enter the 2 coordinates (1-3) player 1:\n"; // all of this separate player copypaste can probably be condensed in a class, but I dunno
			cin >> column >> row;
			checkCoord(column);
			checkCoord(row);
			column--;
			row--;
			gridValues[column][row] = 1;
		}
		printGrid();
	}
	cout << "It's a draw!\n\n"; // this will probably be always printed, even after win conditions are added and met, but I don't know where to put it for now
	//yet yet another another edit edit
	keep_window_open();
};