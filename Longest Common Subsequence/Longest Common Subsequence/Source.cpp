/* A Naive recursive implementation of LCS problem */
#include <algorithm>
#include <iostream>
using namespace std;



/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs(char *X, char *Y, int m, int n)
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m - 1] == Y[n - 1])
		return 1 + lcs(X, Y, m - 1, n - 1);
	else
		return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n));
}



/* Driver code */
int main()
{
	char X[] = "Stone";
	char Y[] = "longest";

	int m = 6;
	int n = 8;

	cout << "Length of LCS is " << lcs(X, Y, m, n);

	return 0;
}

