#include<stdio.h>
#include<sys/time.h>
#include<unistd.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
void matrix1(int *sum,int len,int*a,int**b)
{
	for(int i=0;i<len;i++)
	{
		 sum[i]=0;
		 for(int j=0;j<len;j++)
			  sum[i]+=b[j][i]*a[j];
	}
}
void matrix2(int *sum,int len,int*a,int**b)
{
	for(int j=0;j<len;j++)
		for(int i=0;i<len;i++)
			sum[i]+=b[j][i]*a[j];
}
int main()
{
	const int len=10000;
	int*a=new int[len];
	int*sum=new int[len];
	int**b=new int*[len];
	for(int i=0;i<len;i++)
		 b[i]=new int[len];
	 srand((int)time(0));
	  for(int i=0;i<len;i++)
		    a[i]=rand()%100;
	   for(int i=0;i<len;i++)
		    for(int j=0;j<len;j++)
			         b[i][j]=rand()%100;
	   matrix1(sum,len,a,b);
	   matrix2(sum,len,a,b);
	   delete[]a;
	   delete[]sum;
	   for(int i=0;i<len;i++)
		   delete[]b[i];
	   return 0;
}
