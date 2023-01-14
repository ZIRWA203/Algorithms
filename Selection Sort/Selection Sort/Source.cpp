// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
	int a[] = { 7, 4, 10, 8, 3, 1 };
	int i, min, j, k,n=6;
	for (i = 0; i< n-1; i++)
	{
		min = i;
		for (j = i + 1; j<n; j++)
		{
			if (a[j]<a[min])
			{
				min = j;
			}
			if (min != i)
			{
				a[i] = a[min];
			}
		}
	}
	for (k = 0; k<n - 1; k++)
	{
		cout << a[k] << endl;
	}
}

