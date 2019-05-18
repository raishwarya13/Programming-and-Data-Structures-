//============================================================================
// Name        : lab2.cpp
// Author      : Beatriz Juarez and Aishwarya Ravishankar
// Version     :
// Copyright   : Your copyright notice
// Description : Compound Interest Calculator.
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//int years;
	float a;  // new balance after period.
	float r;
	r =  0.04; // interest rate.
	int p;
	p = 50000; // this is original principal on deposit.
	int n;
	n = 12; // number of times rate is compounded (monthly, so 12 months in 1 year).
	int t; // number of years user will input.
	cout << "Enter the number of years that the money will remain on deposit." <<endl; //prompts user input & ends line.
	cin >> t;    // displays user input.
	a = p* pow(1 + (r/n), n*t);  // formula give for compound interest.
	cout << a << endl; // displays new balance after period & ends line.

}
