/*
Title: Chapter 3 exercise 17 - Math Tutor
File name: Chapter3ex17.cpp
Programmer: Patrick Maloon
Date: 10/10/2024

Requirements:
Write a program that can be used to as a math tutor for a young student.
The program should display two random numbers to be added and pauses
while the student works on the problem.
When the student is ready to check their work, they can press a key and
the program will dispolay the correct solution.
Once this is coded, create a branch that allows the user to enter their answer
and then display the correct answer followed by "You are correct" or Your answer is not correct."
*/

#include<iostream>
#include<random>
using namespace std;

int main()
{
	random_device MyEngine;
	uniform_int_distribution<int> randomInt(0, 999);

	int num1 = randomInt(MyEngine);
	int num2 = randomInt(MyEngine);
	int answer = num1 + num2;
	int useranswer;

	cout << "Press enter to begin using the Math Tutor program\n";
	cin.get();
	cout << "What is the answer to the following problem? \n";
	cout << num1 << " + " << num2 << " = " << endl;
	cout << "Type your answer here and press enter: ";
	cin >> useranswer;
	cin.get();
	cout << "The correct answer is \n" << num1 << " + " << num2 << " = " << answer<<endl;

	if (useranswer == answer)
		cout << "You are correct!\n";
	else
		cout << "Your answer is not correct.\n";

	return 0;
}