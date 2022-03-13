#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	const int len=pow(2.0,15);
	int *a=new int[len];
	for(int i=0;i<len;i++)
		a[i]=i;
	for(int m=len;m>1;m/=2)
		for(int i=0;i<m/2;i++)
			a[i]=a[i*2]+a[i*2+1];
	cout<<a[0];
	return 0;
}
