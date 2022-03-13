#include<stdio.h>
#include<sys/time.h>
#include<unistd.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	srand((int)time(0));
	const int len=5000;
	int*a=new int[len];
	int*sum=new int[len];
	int**b=new int*[len];
	for(int i=0;i<len;i++)
		b[i]=new int[len];
	for(int i=0;i<len;i++)
		a[i]=rand()%100;
	for(int i=0;i<len;i++)
		for(int j=0;j<len;j++)
			b[i][j]=rand()%100;
	struct  timeval start;
	struct  timeval end;
	unsigned  long diff;
	 gettimeofday(&start,NULL);
	for(int i=0;i<len;i++)
	{
		sum[i]=0;
		for(int j=0;j<len;j++)
			sum[i]+=b[j][i]*a[j];
	}
	 gettimeofday(&end,NULL);
	 diff = 1000000 * (end.tv_sec-start.tv_sec)+ end.tv_usec-start.tv_usec;
	 cout<<"thedifference is"<< diff<<" ";
	delete[]a;
	delete[]sum;
	for(int i=0;i<len;i++)
		delete[]b[i];
	return 0;


}
