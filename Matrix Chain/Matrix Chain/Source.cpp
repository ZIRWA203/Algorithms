#include <iostream>
int main()
{
	int n = 5;
	int p[] = {5,4,6,2,7};
	int m[5][5] = { 0 };
	int s[5][5] = { 0 };
	int min, q, j;
	for (int d = 1; d < n - 1; d++)
	{
		for (int i = 1; i<n - d; i++)
		{
			j = i + d;
			min = 32767;
			for (int k = 1; k <= j - 1; k++)
			{
				q = m[i][k] + m[k + 1][j] + p[i - 1] * p[j] * p[k];

				if (q<min)
				{
					min = q;
					s[i][j] = k;

				}
				m[i][j] = k;
			}
		}
	}
	std::cout << m[1][n - 1];
}