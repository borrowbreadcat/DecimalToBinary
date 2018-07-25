// DecimalToBinary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "io.h"

using namespace std;

void splash()
{
	cout << "part of the borrowbreadcat learns C++ effort.\n";
	cout << "this code is primarily practice work for me as I learn to program.\n\n";
	cout << "\tVERSION HISTORY\n";
	cout << "\tv20180725.1: finished working version\n";
	cout << "\tv20180724.1: initial code\n";
	cout << "\tv20180723.1: creation\n\n";
	cout << "learncpp.com Chapter 3 Section 7: Converting Between Decimal and Binary\n";
	cout << "\"6. Write a program that asks the user to input a number between 0 and 255.\n";
	cout << "Print this number as an 8 - bit binary number(of the form #### ####).\n";
	cout << "Don't use any bitwise operators.\"\n\n";
}

int requestUserNumber()
{
	cout << "What base-10 integer would you like to see in binary?\n";
	cout << "\n\tMY NUMBER IS...";
	int input;
	cin >> input;
	cout << "\n" << endl;
	return input;
}

int decToBin(int num)
{
	cout << "This is what " << num << " looks like written as a binary number... \n\t";
	int binPlaceVal = 128;
	while ( binPlaceVal >= 1 )
	{
		if (num >= binPlaceVal)
		{
			cout << "1 ";
			num = num - binPlaceVal;
		}
		else
		{
			cout << "0 ";
		}
		binPlaceVal = binPlaceVal / 2;
	}
	return 0;
}

int main()
{
	splash();
	bool repeat{ true };
	while (repeat == true)
	{
		int userNumber = requestUserNumber();
		decToBin(userNumber);

		cout << "\n\nYou wanna do another one?\n";
		repeat = userYesNo();
	}

    return 0;
}
