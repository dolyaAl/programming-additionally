#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n * n; ++i)
	{
		int x = 0;
		cin >> x;
		sum += x;
	}
	cout << sum / 2;
	return 0;
}