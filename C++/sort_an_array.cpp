// Sorting an array with Quick Sort

#include <bits/stdc++.h>
using namespace std;

// A utility function to swap two elements
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

// Function to to partition 
int partition (int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

// Function to implement Quick Sort
void quick_sort(int arr[], int low, int high)
{
	if (low < high)
	{
		int partition_index = partition(arr, low, high);
		quick_sort(arr, low, partition_index - 1);
		quick_sort(arr, partition_index + 1, high);
	}
}

// Function to print all the elements array 
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int arr[] = {78,67,45,90,10,5,7,35};
	int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Input Array: ";
  printArray(arr, n);

	quick_sort(arr, 0, n - 1);
  
	cout << "Sorted Array: ";
	printArray(arr, n);
	return 0;
}
