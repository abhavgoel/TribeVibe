
#include<iostream>
using namespace std;


int deleteElement(int arr[], int n, int x)
{

if (arr[n-1] == x)
	return (n-1);


int prev = arr[n-1], i;
for (i=n-2; i>=0 && arr[i]!=x; i--)
{
	int curr = arr[i];
	arr[i] = prev;
	prev = curr;
}


if (i < 0)
	return 0;


arr[i] = prev;

return (n-1);
}


int main()
{
	int arr[] = {11, 15, 6, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 6;

	// Delete x from arr[]
	n = deleteElement(arr, n, x);

	cout << "Modified array is \n";
	for (int i=0; i<n; i++)
	cout << arr[i] << " ";

	return 0;
}
