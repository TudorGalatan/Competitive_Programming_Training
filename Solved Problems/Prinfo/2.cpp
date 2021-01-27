#include <iostream>


int main ()
{
	unsigned short int N;
	std::cin >> N;

	for (unsigned short int index = 0; index < N; index++)
		std::cout << '*';
	std::cout << '\n';

	return 0;
}