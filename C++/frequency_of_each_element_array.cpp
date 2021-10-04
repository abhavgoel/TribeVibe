#include <bits/stdc++.h>
using namespace std;
void frequency(int arr[], int size){
   unordered_map<int, int> um;
   for (int i = 0; i < size; i++){
      um[arr[i]]++;
   }
   for (auto x : um){
      cout<<"frequency of "<<x.first<<" is: "<< x.second<< endl;
   }
}
int main(){
   int arr[] = {1, 2, 3, 1, 2, 3 };
   int size = sizeof(arr) / sizeof(arr[0]);
   frequency(arr, size);
   return 0;
}