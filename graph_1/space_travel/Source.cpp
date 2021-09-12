#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	int tun[100]{ 0 };
	int important = 0;
	for (int i = 0; i < 2 * (N - 1); ++i)
	{
		int x = 0;
		cin >> x;
		++tun[x - 1];
	}
	for (int i = 0; i < N; ++i)
	{
		if (tun[i] > 1)
		{
			important++;
		}
	}
	cout << important;
	return 0;
}