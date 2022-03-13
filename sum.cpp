#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	const int len=pow(2.0,15);
	int *a=new int[len];
	int sum=0;
	for(int i=0;i<len;i++)
		a[i]=i;
	for(int i=0;i<len;i++)
		sum+=a[i];
	cout<<sum;
	return 0;

}
