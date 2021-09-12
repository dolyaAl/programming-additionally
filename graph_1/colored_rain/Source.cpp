#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int matrix[100][100]{ 0 };
	int colors[100]{ 0 };
	int count = 0;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < N; ++i)
	{
		cin >> colors[i];
	}
	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			if (matrix[i][j] == 1 && colors[i] != colors[j])
			{
				count++;
			}
		}
	}
	cout << count;
	return 0;
}