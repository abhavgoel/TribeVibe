#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    //input string
    int arr[] = { 1, 45, 55, 71, 76, 13 };
  
   
    int n = sizeof(arr) / sizeof(arr[0]);
  

    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
  

    sort(arr, arr + n, greater<int>());

    cout << "\nDescending Sorted Array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
