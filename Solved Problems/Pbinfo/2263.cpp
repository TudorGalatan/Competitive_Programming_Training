#include <iostream>


int main ()
{
	unsigned short int t1, t2, n, m, z;
	std::cin >> t1 >> t2 >> n >> m >> z;

	std::cout << z * (t1 * n + t2 * m) << '\n';

	return 0;
}