#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int m;
	while (b != 0)
	{
		m = a % b;
		a = b;
		b = m;
	}
	return a;
}

int main()
{
	cin.tie(NULL);

	cout.tie(NULL);

	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << '\n';
	cout << a * b / gcd(a, b) << '\n';

	return 0;




}