# include<iostream>
using namespace std;
    

int main()
{
        int a[10]={6,8,13,17,20,22,25,28,30,35};
 	int l=0,h=9,key,mid;
	cout<<"enter the key;
	cin>>key;
	whlie(l<=h)
	{
		mid=(l+h)/2;
		if(key==a[mid])
		{
			cout<<"found at"<<mid;
			return 0;
		}
		else if(key<a[mid])
			h=mid-l;
		else
			l=mid+l;
	}
	cout<<"not found";
	return 0;
}
