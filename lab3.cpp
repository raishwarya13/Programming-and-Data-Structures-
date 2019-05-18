//============================================================================
// Name        : lab3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Enter the largest number you'd like to be with.";
	int maxOperand;
	cin >> maxOperand;

	string mathOperand;
	cout << "Enter the operand you'd like to perform.";
	cin >> mathOperand;

	int num1 = rand() % maxOperand + 1;
	int num2 = rand() % maxOperand + 1;

	if (mathOperand == "+"){
		int question1;
		question1 = num1 + num2;
		cout << num1 << "+" << num2 << endl;
		int answer;
		cout << "Enter your answer";
		cin >> answer;
		if (question1 == answer){
			cout << "Congrats!";
		} else {
				cout << "Sorry, wrong answer.";
			} // ends else
	}

		if (mathOperand == "-"){
				int question1;
				question1 = num1 - num2;
				cout << num1 << "-" << num2 << endl;
				int answer;
				cout << "Enter your answer";
				cin >> answer;
				if (question1 == answer){
					cout << "Congrats!";
				} else {
						cout << "Sorry, wrong answer.";
					} // ends else
		}

		if (mathOperand == "*"){
				int question1;
				question1 = num1 * num2;
				cout << num1 << "*" << num2 << endl;
				int answer;
				cout << "Enter your answer";
				cin >> answer;
				if (question1 == answer){
					cout << "Congrats!";
				} else {
						cout << "Sorry, wrong answer.";
					} // ends else
		}

		if (mathOperand == "/"){
				int question1;
				question1 = num1 / num2;
				cout << num1 << "/" << num2 << endl;
				int answer;
				cout << "Enter your answer";
				cin >> answer;
				if (question1 == answer){
					cout << "Congrats!";
				} else {
						cout << "Sorry, wrong answer.";
					} // ends else
		} else {
		cout << "Sorry, that operand is not valid"; // ends if
	} // ends else

} // ends main
