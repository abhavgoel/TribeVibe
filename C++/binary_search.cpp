#include<iostream>
using namespace std;
    

int main()
{
    int a[10]={6,8,13,17,20,22,25,28,30,35};
 	int l=0,h=9,key,mid;
	cout<<"enter the key";
	cin>>key;
	while(h-l>1)
	{
		mid=(l+h)/2;
	
		if(a[mid]>key)
			h=mid-l;
		else
			l=mid;
	}
	if(a[l]==key){
	    cout<<"fount at"<<" "<<l;
	}
	else if(a[h]==key){
	    cout<<"fount at"<<" "<<h;
	}
	else{
	cout<<"not found";
	}
	return 0;
}
