#include<bits/stdc++.h>
#define SIZE 7
using namespace std;
int main(){
	int marks[]={74,43,432,4245,12,123,1};
	int sum=0;
	int sumsq=0;
	double mean,stdDev;
	for(int i=0;i<SIZE;i++){
		sum+=marks[i];

	}
	for(int i=0;i<SIZE;i++){
		sumsq+=marks[i]*marks[i];

	}
	mean=(double)sum/SIZE;
	cout<<fixed<<"Mean is "<<setprecision(2)<<mean<<endl;
	stdDev=sqrt((double)sumsq/SIZE-mean*mean);
	cout<<fixed<<"Std deviation is "<<setprecision(2)<<stdDev<<endl;
	return 0;
}