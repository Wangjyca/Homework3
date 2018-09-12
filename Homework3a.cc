/// Jingyu Wang
#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;

void showMenu();
float add(float num1, float num2);
float substract(float num1, float num2);
float sqare(float num);
float sqareRoot(float num);
float cubeFunction(float num);
float cubeRoot(float num);
float powerFunction(float numBase, float numExponent);

int main()
{
	float num1;
	float num2;
	//float result;
	int choice;
	char exitsymbol='n';
	do
	{
		showMenu();

		cin >> choice;

		switch (choice)
		{
		case 1:
			// do addition

			cout << "Enter first number :";
			cin >> num1;

			cout << "Enter second number :";
			cin >> num2;

			
			cout << "Result is " << setprecision(2) << fixed << add(num1,num2);

			break;

		case 2:


			//do subtraction
			cout << "Enter first number :";
			cin >> num1;

			cout << "Enter second number :";
			cin >> num2;

			
			cout << "Result is " << setprecision(2) << fixed << substract(num1, num2);
			break;
		case 3:

			//do square
			cout << "Enter the number for square :";
			cin >> num1;
			
			cout << "Result is for " << sqare(num1);
			break;
		case 4:

			//do square root
			cout << "Enter the number for square root :";
			cin >> num1;
			 
			cout << "Result is " << setprecision(2) << fixed << sqareRoot(num1);

			break;
		case 5:

			//do cube
			cout << "Enter the number for Cube :";
			cin >> num1;
			 
			cout << "Result is " << setprecision(2) << fixed << cubeFunction(num1);

			break;
		case 6:

			//do cube root
			cout << "Enter the number for cube root :";
			cin >> num1;
			
			cout << "Result is " << setprecision(2) << fixed << cubeRoot(num1);

			break;
		case 7:

			// do power
			cout << "Enter the number of base :";
			cin >> num1;

			cout << "Enter the power number of exponent :";
			cin >> num2;

			cout << "Result is " << setprecision(2) << fixed << powerFunction(num1,num2);

			break;

		default:
			cout << "Enter a valid input :";
		}


		cout << endl << endl;
		cout << "Will you exit?(Y/N)" << endl;
		cin >> exitsymbol;

	} while (exitsymbol != 'Y' && exitsymbol != 'y');


	return 0;

}


void showMenu()
{

	cout << "Enter your choice. Pick (1-7) " << endl;
	cout << " 1. Addition " << endl;
	cout << " 2. Subtraction " << endl;
	cout << " 3. square " << endl;
	cout << " 4. square root " << endl;
	cout << " 5. cube  " << endl;
	cout << " 6. cube root " << endl;
	cout << " 7. power " << endl;
}

float add(float num1, float num2)
{
	return (num1 + num2);
}


float substract(float num1, float num2)
{
	return (num1 - num2);
}

float sqare(float num)
{
	return pow(num, 2);
}

float sqareRoot(float num)
{
	return sqrt(num);
}

float cubeFunction(float num)
{
	return pow(num,3);
}


float cubeRoot(float num)
{
	return cbrt(num);
}

float powerFunction(float numBase, float numExponent)

{
	return pow(numBase, numExponent);
}


