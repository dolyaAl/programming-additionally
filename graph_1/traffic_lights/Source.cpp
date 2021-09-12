#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int M = 0;
	cin >> N;
	cin >> M;
	int tun[100]{ 0 };
	for (int i = 0; i < 2 * M; ++i)
	{
		int x = 0;
		cin >> x;
		++tun[x - 1];
	}
	for (int i = 0; i < N; ++i)
	{
		cout << tun[i] << " ";
	}
	return 0;
}