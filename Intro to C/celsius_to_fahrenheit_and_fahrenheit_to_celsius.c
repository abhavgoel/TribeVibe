#include<iostream>
    using namespace std;
    void ctoF(){
      int c;
      cin>>c;
      int f;
      f=(c*1.8)+32;
      cout<<f<<endl;}
    void ftoC(){
      int f;
      cin>>f;
      int c;
      c=(f-32)/1.8;
      cout<<c<<endl;}
    
    int main()
    {
      //your code here
     int n;
    cout<<"1 for C to F"<<endl;
    cout<<"2 for F to C"<<endl;
    cin>>n;
    (n==1)?ctoF():ftoC();
     
    }
