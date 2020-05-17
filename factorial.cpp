#include<iostream>
using namespace std;
int main()
{   long fact=1;
	long n;
	cout<<"enter the value whose factorial is need to be calculated(n)";
	cin>>n;
	for(long i=1;i<=n;i++)
		fact=fact*i;
	cout<<n<<"! is "<<fact;
	return 0;

}