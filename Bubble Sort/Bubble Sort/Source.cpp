#include <iostream>
using namespace std;

void BubbleSort(int A[], int n)
{
	int temp = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

int main()
{
	int Array[] = {16,14,5,6,8};
	BubbleSort(Array,5);
	for (int i = 0; i < 5; i++)
	{
		cout << Array[i] << endl;
	}
}