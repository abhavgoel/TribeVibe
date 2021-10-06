#include<bits/stdc++.h> 
using namespace std; 
void unique_number(int arr[], int n) 
{ 
  // Sorting the given array
  sort(arr, arr + n); 
    
  // Finding unique numbers
  for (int i=0; i<n; i++) 
    { 
    if(arr[i]==arr[i+1])
    {
      continue;
    }
    else
    {
        cout<<arr[i]<<" ";
    }
    }
} 
  
// Driver program
int main() 
{ 
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter numbers you want to take in array: ";
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"\nUnique numbers in given array are: ";
    unique_number(arr, n); 
    return 0; 
}
