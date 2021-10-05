//Author: Sundar

#include <iostream>
using namespace std;

/* Question: Find the nearest possible interger value(ie floor) of the SQUARE ROOT of a number.

	Example:
				num=9  ans=3
				num=8  ans=2  //as sqrt(8)=2.828 . Applying greatest integer function(gif)
				//or finding the integer nearest and smaller than the sqrt(), we get 2

				num=5  ans=2  //sqrt(5)=2.32 .. floor(2.32)=2
				num=16 ans=4
				num=4  ans=2
*/

//Fiding the SquareRoot using Binary Search

int squareRoot(int num)
{
	if (num <= 1)
		return num;

	int low = 1, high = num;
	int mid;

	int ans = 0;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (mid  == num / mid)  //This is just mid*mid==num .
		{	//Doing it this way so that we can avoid integer overflow when multiplying mid*mid
			
             return mid;				
		}
		else if (mid < num / mid) {
			ans = mid;
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	int ret = squareRoot(n);
	cout << "The Square Root Rounded to integer(floor) : " << ret;


	return 0;
}
