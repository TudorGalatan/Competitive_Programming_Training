#include <iostream>


int main ()
{
	unsigned short int N;
	std::cin >> N;

	for (unsigned short int line = 1; line <= N; line++)
	{
		for (unsigned short int column = 1; column <= line; column++)
			std::cout << column << ' ';
		std::cout << '\n';
	}

	return 0;
}