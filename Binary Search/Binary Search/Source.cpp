#include <iostream>
using namespace std;
int main()
{
	int a[] = { 12, 50, 60, 70, 80, 200 };

	int searchvalue, n = 6, left = 0, right = n - 1;
	cout << "Enter value form { 12, 50, 60, 70, 80, 200 }" << endl;
	cin >>searchvalue;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (searchvalue == a[mid])
		{
			cout << "Value "<< a[mid]<<" found at" <<mid<< endl;
			break;
		}
		else if (searchvalue < a[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}

	}

}