//============================================================================
// Name        : lab4.cpp
// Author      :  Aishwarya Ravishankar and Beatriz Juarez
// Version     :
// Copyright   : Your copyright notice
// Description : Random number guessing
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int maxnum;
	do {
	cout << "Enter a positive number less than 1000000."; //This prompts the user for largest value for the random number
	cin >> maxnum;
	} while (maxnum < 0 || maxnum > 1000000);



	double ran = rand() % maxnum + 1;
	double x = 2;
	int guess;
	double logbase =  (log10(ran) / log10(x)); //this gives the user feed back if they took fewer than ceil guesses to get the right answer
	int maxguess = ceil(logbase);
	cout << "Log base 2 of the maximum random number is:" << logbase << endl;  //this displays the max random number
	cout << "The max number of guesses you should need is:" << maxguess << endl; // this displays the max number of guesses needed
	while (ran != guess ){
		cout << "What is your next guess? ";
		cin >> guess;
		if (guess < ran) {
			cout << "Your guess is less than random number. Try again" << endl;
		} else if (guess > ran) {
			cout << "Your guess is greater than random number. Try again" << endl;
		} else {
			cout << "Congrats.";
		}
	}

} //closes off main
