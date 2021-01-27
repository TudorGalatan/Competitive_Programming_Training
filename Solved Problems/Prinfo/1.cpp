#include <iostream>


int main ()
{
	int A, B, C;
	std::cin >> A >> B >> C;

	A = (A > B ? A : B);
	A = (A > C ? A : C);

	std::cout << A << '\n';

	return 0;
}