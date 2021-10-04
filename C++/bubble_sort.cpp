#include <iostream>
using namespace std;


int main() {
    int n,data;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:\n";
    for (int i = 0; i < n; i++){
            cin>>data;
            a[i]=data;
        }
  int size = sizeof(a) / sizeof(a[0]);
 
  for (int step = 0; step < (size-1); ++step) {
    for (int i = 0; i < size - (step-1); ++i) {
      if (a[i] > a[i + 1]) {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
  }
  cout << "Sorted Array in Ascending Order:\n";  
  for (int i = 0; i < size; ++i) {
    cout << "  " << a[i];
  }
  cout << "\n";
}