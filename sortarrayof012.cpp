#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void SortArrayOf012(int *arr,int size)
{
	int ptr,l,h;
	ptr=0;
	l=0;
	h=size-1;
	for(int i=0;i<=size;i++)
	{	if(arr[i]==0)
		{
			swap(arr[i],arr[l]);
			ptr++;
			l++;

		}
		if(arr[i]==1)
		{
			ptr++;
		}
		if(arr[i]==2)
		{
			swap(arr[i],arr[h]);
			ptr++;
			h--;

		}
	}
}
int main()
{
	int arr[10]={0,1,1,1,2,0,0,0,1};
	int size=10;
	SortArrayOf012(arr,size);
	for(int i=0;i<size;i++)
		cout<<arr[i];

}