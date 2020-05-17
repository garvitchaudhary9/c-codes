#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter the number";
	cin>>n;
	for( i=2;i*i<n;i++)
	{
		if(n%i==0)
		{	cout<<"not prime";
			break;}}
	if((i*i)>n)
		cout<<"prime";
	return 
	0;
	
}