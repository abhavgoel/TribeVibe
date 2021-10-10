/*
Example 
d = 2 , n = 5 ;
arr[ n ] = { 1 , 2 , 3 , 4 , 5}
after 2 rotations arr[n] = { 3 , 4 , 5 , 1 , 2 }
Input Format
The first line contains two space-separated integers that denote n , the number of integers, and d, the number of left rotations to perform.
The second line contains  space-separated integers that describe a[n].
Input
5 4
1 2 3 4 5
Output
5 1 2 3 4
*/
#include <bits/stdc++.h>

using namespace std;

void rotateone(int n , int d ,int a[]){
    int temp = a[0] ; 
    for(int i = 0 ; i < n ;i++){
        a[i] = a[i+1];
    }
    a[ n-1 ] = temp ;
}

void leftrotate(int n , int d ,int a[]){
    for(int i = 0 ; i < d ; i++){
        rotateone(n , d ,a );
    }
}
int main()
{
    int n , d ; 
    cin >> n >>  d  ;
    int a[ n ]; 
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    leftrotate(n , d , a) ;
    for(int i = 0 ; i < n ; i++){
        cout << a[i] <<" "; 
    }
}
