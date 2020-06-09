#include<iostream>
using namespace std;
int main(){
	char msg[256];
	cout<<"enter the message with space"<<endl;
	cin.getline(msg,256);
	cout<<msg<<endl;
	cout<< "enter the word without space"<<endl;
	cin>>msg;
	cout<<msg;
	return 0;
}