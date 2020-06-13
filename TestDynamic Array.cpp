#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	const int size=5;
	int * pArray;
	pArray= new int[size];
	//assinging random numbers between 0-99
	for(int i=0;i<size;i++){
		*(pArray+i)=rand()%100;

	}
	for(int i=0;i<size;i++){
		cout<<*(pArray+i)<<" ";

	}
	cout<<endl;
	delete pArray;
	return 0;

}