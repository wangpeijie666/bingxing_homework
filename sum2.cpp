#include <iostream>
#include <math.h>
#include<stdio.h>
#include<sys/time.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int len=pow(2.0,28);
	int*a=new int[len];
	int sum1=0;
	int sum2=0;
	int sum=0;
	srand((unsigned)time(NULL));
	for(int i=0;i<len;i++)
		a[i]=rand()%100;
	for(len;len>=2;len=len/2)
	{
	 struct  timeval start;
	 struct  timeval end;
	 unsigned  long diff;
	 gettimeofday(&start,NULL);
	for(int i=0;i<len;i+=2)
	{
		sum1+=a[i];
		sum2+=a[i+1];
	}
	sum=sum1+sum2;
	gettimeofday(&end,NULL);
	diff = 1000000 * (end.tv_sec-start.tv_sec)+ end.tv_usec-start.tv_usec;
	cout<<"n="<<len<<" "<<"timeis"<<diff<<endl;
	}
	delete[]a;
	return 0;
}
