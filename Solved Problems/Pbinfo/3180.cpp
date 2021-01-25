#include <iostream>


int main ()
{
	unsigned short int a, b, c, n, m, p;
	std::cin >> a >> b >> c >> n >> m >> p;

	unsigned long long int total = (unsigned long long int)a * (unsigned long long int)n;
	total += (unsigned long long int)b * (unsigned long long int)m;
	total += (unsigned long long int)c * (unsigned long long int)p;
	std::cout << total << '\n';

	return 0;
}