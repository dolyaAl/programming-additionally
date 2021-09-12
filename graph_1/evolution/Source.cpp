#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	long long a = 0;
	long long b = 0;
	cin >> N;
	cin >> a;
	cin >> b;
	while (a != b)
	{
		a > b ? a /= 2 : b /= 2;
	}
	cout << a;
	return 0;
}