/*
Dorothy Bui 9/25/17 2nd period
Take in Data
create a new project to display the user questions to take in data and create variables to store data
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	int worlds_games_TSM_will_win;
	char choice_answer; 
	bool answersMatch = true; 
	double memberGuess; 

	int calc_1, calc_2, calc_3, calc_4;

	cout << "How many games will tsm win at 2017 worlds? :" << endl;
	cin >> worlds_games_TSM_will_win;
	cout << "Which team will win at 2017 worlds (a/b/c/d)?" << endl;
	cin >> choice_answer;
	if (choice_answer == 'a' || choice_answer == 'A') {
		answersMatch = false;
	}
	if (choice_answer == 'c' || choice_answer == 'C') {
		answersMatch = false;
	}
	if (choice_answer == 'd' || choice_answer == 'D') {
		answersMatch = false;
	}

	cout << "How many members are on the TSM League team? :" << endl ;
	cin >> memberGuess;

	cout << "Give me 4 random whole numbers: " << "\n";
	cout << "Number 1:" << endl;
	cin >> calc_1; 
	cout << "Number 2:" << endl;
	cin >> calc_2;
	cout << "Number 3:" << endl;
	cin >> calc_3;
	cout << "Number 4:" << endl;
	cin >> calc_4;

	cout << "I think you are correct, TSM will win " << worlds_games_TSM_will_win << " games this year at worlds. \n";
	cout << boolalpha << "I think that is " << answersMatch << " for which team will win at 2017 worlds." << endl;
	cout << "So you think TSM has " << memberGuess << " members" << '\n';

	cout << calc_1 << "+" << calc_2 << "=" << calc_1 + calc_2 << endl;
	cout << calc_3 << "-" << calc_4 << "=" << calc_3 - calc_4 << endl;
	pause();

}