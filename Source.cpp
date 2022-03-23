#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// this program present the menu of the task, the program reads the user's selection and
	// sends it to the selected task

	int task_number; // the number of task that the user select
	cout << "menu: \n";
	cout << "\n";
	cout << "0. exit \n";
	cout << "1. for sum of fractions \n";
	cout << "2. for print numbers with sum digits equal to number \n";
	cout << "3. for prime digits \n";
	cout << "4. for print pyramid \n";
	cout << "please select the number of task you want to check \n";
	cin >> task_number;

	while (task_number != 0)
	{
		switch (task_number)
		{

		case 1:


			// this program reads a natural number, calculate and print the sum of the number using
			// 1/1^2 +1/2^2 +⋯+1/n^2 

			int num1; //the natural number
			double sum; // the sum of the calculation
			int i; //the 'while' function number
			sum = 0;
			i = 1;
			cout << "please enter a number \n";
			cin >> num1;
			while (i <= num1)
			{
				sum = sum + 1 / pow(i, 2);
				i = i + 1;
			}
			cout << "the sum of the calculation is: \n";
			cout << sum << endl;

			break;

		case 2:


			// this program receives a positive natural number, the program print all two digit
			// numbers whose sum of digits is equal to the same number

			int num2; // the positive and natural number
			int j; // the 'while' function number
			cout << "please enter a number \n";
			cin >> num2;
			cout << "the numbers with the digits that are equals to the number are:" << endl;
			for (j = 10; j <= 99; j++)
			{
				if ((j % 10 + j / 10) == num2)
				{
					cout << j << endl;
				}
			}

			break;

		case 3:


			// this program recevies a natural number, the program will print its total digits
			// which are prime numbers and also the digits themselves

			int num3; // the natural number
			int number_prime; // counts the prime digits numbers
			int num_prime2; // counts the prime number 2
			int num_prime3; // counts the prime number 3
			int num_prime5; // counts the prime number 5
			int num_prime7; // counts the prime number 7
			int prime2; // the prime number 2
			int prime3; // the prime number 3
			int prime5; // the prime number 5
			int prime7; // the prime number 7
			num_prime2 = 0;
			num_prime3 = 0;
			num_prime5 = 0;
			num_prime7 = 0;
			number_prime = 0;
			cout << "please enter a number \n";
			cin >> num3;
			while (num3 > 0)
			{
				if (num3 % 10 == 2)
				{
					prime2 = num3 % 10;
					num_prime2 = num_prime2 + 1;
					number_prime = number_prime + 1;
				}
				if (num3 % 10 == 3)
				{
					prime3 = num3 % 10;
					num_prime3 = num_prime3 + 1;
					number_prime = number_prime + 1;
				}
				if (num3 % 10 == 5)
				{
					prime5 = num3 % 10;
					num_prime5 = num_prime5 + 1;
					number_prime = number_prime + 1;
				}
				if (num3 % 10 == 7)
				{
					prime7 = num3 % 10;
					num_prime7 = num_prime7 + 1;
					number_prime = number_prime + 1;
				}
				num3 = num3 / 10;
			}
			cout << "the prime digits in this number are:" << endl;
			if (num_prime2 == 1 || num_prime2 > 1)
			{
				cout << prime2 << endl;
			}
			if (num_prime3 == 1 || num_prime3 > 1)
			{
				cout << prime3 << endl;
			}
			if (num_prime5 == 1 || num_prime5 > 1)
			{
				cout << prime5 << endl;
			}
			if (num_prime7 == 1 || num_prime7 > 1)
			{
				cout << prime7 << endl;
			}
			cout << "there are " << number_prime << " prime digits is this number" << endl;

			break;

		case 4:

			// this program recevies a natural integer number, the program will print a pyramid
			// with the digits up to the number that the program recevied

			int num4; // the natural number
			int lines; // the lines in the pyramid
			int columns; // the columns in the pyramid
			int digits; // the following numbers until the recevied number
			cout << "please enter a number" << endl;
			cin >> num4;
			for (lines = 1; lines <= num4; lines++)
			{
				for (columns = 1; columns <= num4 - lines; columns++)
				{
					cout << " ";
				}
				for (digits = 1; digits <= lines; digits++)
				{
					cout << digits << " ";
				}
				cout << "\n";
			}

			break;


		}
		cout << "menu: \n";
		cout << "\n";
		cout << "0. exit \n";
		cout << "1. for sum of fractions \n";
		cout << "2. for print numbers with sum digits equal to number \n";
		cout << "3. for prime digits \n";
		cout << "4. for print pyramid \n";
		cout << "please select the number of task you want to check \n";
		cin >> task_number;


	}
	cout << "thank you and goodbye";

	return 0;
}