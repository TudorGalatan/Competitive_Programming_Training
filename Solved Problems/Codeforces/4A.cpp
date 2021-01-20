#include <iostream>


int main ()
{
	unsigned short int w;
	std::cin >> w;

	if (w < 4 || w % 2)
		std::cout << "NO\n";
	else
		std::cout << "YES\n";

	return 0;
}