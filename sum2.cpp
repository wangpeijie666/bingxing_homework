#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	const int len=pow(2.0,15);
	int*a=new int[len];
	int sum1=0;
	int sum2=0;
	int sum=0;
	for(int i=0;i<len;i++)
		a[i]=i;
	for(int i=0;i<len;i+=2)
	{
		sum1+=a[i];
		sum2+=a[i+1];
	}
	sum=sum1+sum2;
	cout<<sum;
	return 0;
}
