#include <iostream>
#include <conio.h>
using namespace std;

void calculateBMI()
{
	system("cls");

	double weight;
	double height;
	cout << endl << endl;
	cout << "\t\tEnter your weight (in kilograms): ";
	cin >> weight;

	cout << "Enter your heigh (in meters): ";
	cin >> height;

	double bmi = weight / (height * height);
	cout << endl << endl;
	cout << "----------------------\n";
	cout << "Your Body Mass Index is " << bmi << endl;

	cout << "----------------------\n";

	if (bmi < 18.5)
		cout << "You are Underweight";
	else if (bmi >= 18.5 && bmi <= 25)
		cout << "You are Perfectly Healthy";
	else if (bmi > 25)
		cout << "You are Overweight";
	cout << endl << "-----------------------";

	cout << "\n\nPress any key to go back to Menu...";


}

void instructions()
{
	system("cls");
	cout << "Instrutions";
	cout << "\n--------------";
	cout << "\n BMI is less than 18.5 : You are Underweight:";
	cout << "\n BMI is between 18.5 and 25 (inclusive)";
	cout << "\n BMI is greater than 25: You are Overweight";
	cout << "\n\nPress ane key to go back to menu";
	getch();
	
}


int main()
{
	do
	{
		system("cls");
		cout << "---------------------------";
		cout << "|      BMI Calculator      |";
		cout << "---------------------------";
		cout << "1. Calculate BMI" << endl;
		cout << "2. BMI Rules" << endl;
		cout << "3. Quit" << endl << endl;
		cout << "Select option: ";
		char op = getche();

		if (op == '1') calculateBMI();
		else if (op == '2') instructions();
		else if (op == '3') exit(0);



	} while (1);

	return 0;
}