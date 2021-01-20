#include <iostream>


int main ()
{
	unsigned int firstNumber, secondNumber;
	std::cin >> firstNumber >> secondNumber;

	std::cout << (firstNumber + secondNumber) % 10 << '\n';

	return 0;
}