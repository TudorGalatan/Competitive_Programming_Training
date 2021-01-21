#include <iostream>


int main ()
{
	unsigned int a;
	std::cin >> a;

	unsigned int red = 2 * a;
	unsigned int green = red - 3;
	unsigned int sum = a + red + green;

	std::cout << sum << '\n';

	return 0;
}