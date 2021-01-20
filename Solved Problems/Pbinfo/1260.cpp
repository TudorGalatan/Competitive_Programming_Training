#include <iostream>


int main ()
{
	unsigned short int firstNumber, secondNumber;
	std::cin >> firstNumber >> secondNumber;

	std::cout << firstNumber + secondNumber << ' ';
	std::cout << firstNumber - secondNumber << ' ';
	std::cout << firstNumber * secondNumber << ' ';
	std::cout << firstNumber / secondNumber << ' ';

	return 0;
}