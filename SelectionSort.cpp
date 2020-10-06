// *************** SELECTION SORT ***************

#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
	
}

void selectionSort(int arr[], int size)
{
	int min = 0;
	for (int i = 0; i < size - 1; ++i)
	{
		min = i;
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
			swap(arr[min], arr[i]);
		}
	}
}



int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	//here
	cout << "Unsorted array: ";
	print(arr, n);
	cout << endl;
	selectionSort(arr, n);
	cout << "Sorted array: ";
	print(arr, n);

	system("pause");
	return 0;
}
