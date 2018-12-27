#include "stdafx.h"
#include "iostream"
#include "stdlib.h" // for rand function

using namespace std;

int main()
{
	string player;
	int total, a1, a2, a3;
	char choice;
	{


		cout << " WELCOME TO BLACKJACK" << endl;

		a1 = rand() % 11 + 2; 
		cout << "Your first number is:" << a1 << endl;

		a2 = rand() % 11 + 2;
		cout << "Your second number is:" << a2 << endl;

		total = a1 + a2;

		cout << "Your total number is:" << total << endl;

		cout << "Do you want to hit (h) or stand (s):?";
		cin >> choice;

		if (total > 21)
		{
			cout << " Sorry! You lose." << endl;

			system("pause");
			exit(0);
		}

		if (choice == 'h')
		{
			a3 = rand() % 11 + 2;
			cout << " Your third number is: " << a3 << endl;

			total = total + a3;

			cout << " Your new total is: " << total << endl;

		}
		if (total > 21)
		{
			cout << " Sorry! You lose." << endl;

			system("pause");
			exit(0);
		}
	}


	if (choice == 's')
	{
		cout << " Dealer turn." << endl;
	}


	string dealer;
	int total2, b1, b2, b3;

	b1 = rand() % 11 + 2;
	cout << " Dealer first number is:" << b1 << endl;

	b2 = rand() % 11 + 2;
	cout << " Dealer second number is:" << b2 << endl;

	total2 = b1 + b2;

	cout << " Dealer total number is:" << total2 << endl;

	if (total2 > 21)
	{
		cout << " You win." << endl;

		system("pause");
		exit(0);
	}

	while (total2 < 16)
	{
		cout << " Dealer hit. " << endl;

		b3 = rand() % 11 + 2;

		cout << " Dealer third number is:" << b3 << endl;

		total2 = total2 + b3;

		cout << " Dealer new total is:" << total2 << endl;

		if (total2 > 21)
		{
			cout << " You win." << endl;

			system("pause");
			exit(0);
		}



		if (total > total2)
		{
			cout << "Player wins";
		}
		else
		{
			cout << "Dealer wins";
		}
	}
	system("pause");
	return 0;
}
