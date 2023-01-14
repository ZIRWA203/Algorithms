//#include <iostream>
//using namespace std;
//
//
//
//int main()
//{
//	int array[] = { 15, 23, 7, 45, 87, 16 };
//
//	int uservalue;
//
//	cout << "Enter an integer: " << endl;
//	cin >> uservalue;
//
//	int size = 6, i;
//
//	for (i = 0; i < size; i++)
//	{
//		if (uservalue == array[i])
//		{
//			cout << " Element " << array[i] << " at index " << i << endl;
//			break;
//
//		}else
//		{
//		    cout<<" not found" ;
//		    break;
//		}
//		
//	}
//
//
//
//
//}

	#include <iostream>
	using namespace std;

	int searchValue(int arr[],int n,int userval )
	{
		for (int i = 0; i < n; i++)
		{
			if (userval == arr[i])
			{
				return i;
			}
			
		}
		return -1;
	}


	int main()
	{
		int a[] = { 2, 0, 7, 9, 20, 100, 1 },i,value,result;
		cout << "Enter Value = ";
		cin >> value;
		result = searchValue(a, 7, value);
		cout << result;
		return 0;
	}
