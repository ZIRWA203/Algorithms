#include <iostream>
using namespace std;

void InserstionSort(int Array[], int n)
{
	int temp,i,j;

	for (i = 1;i<n ; i++)
	{
		temp = Array[i];
		j = i - 1;

		while (j >= 0 && Array[j] > temp)
		{
				Array[j + 1] = Array[j];
				j--;


		}
		Array[j + 1] = temp;
	}
	
}


int main()
{
	int A[] = { 5, 4, 10, 1, 6, 2,0,100,30,50 },n=10;
    InserstionSort(A, n);
	for (int i = 0; i < n ; i++)
	{
		cout << i <<" = "<< A[i] << endl;
	}
	
}

//int main()
//{
//	int Array[] = { 5, 4, 10, 1, 6, 2, 0, 100, 30, 50 }, n = 10;
//	int temp, i, j;
//
//	for (i = 1; i<n; i++)
//	{
//		temp = Array[i];
//		j = i - 1;
//
//		while (j >= 0 && Array[j] > temp)
//		{
//			Array[j + 1] = Array[j];
//			j--;
//
//
//		}
//		Array[j + 1] = temp;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << i << " = " << Array[i] << endl;
//	}
//
//}
