#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int matrix[100][100]{ 0 };
	int count = 3001;
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
		for (int j = i + 1; j < N; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				int x = matrix[i][j] + matrix[j][k] + matrix[k][i];
				if (x < count)
				{
					count = x;
				}
			}
		}
	}
	cout << count;
	return 0;
}