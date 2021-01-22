#include <iostream>


int main ()
{
	unsigned int B, S;
	std::cin >> B >> S;

	unsigned int C = S / B;
	unsigned int P = B - S % B;

	std::cout << C << ' ' << P << '\n';

	return 0;
}