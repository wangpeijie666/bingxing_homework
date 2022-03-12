#include <iostream>
using namespace std;
int main()
{
int a[5000], sum[5000], b[5000][5000];
for (int i = 0; i < 5000; i++)
	a[i] = rand() % 100;
for (int i = 0; i < 5000; i++)
{
	for(int j=0;j<5000;j++)
												b[i][j]= rand() % 100;
}
for (int i = 0; i < 5000; i++)
{
	sum[i] = 0;
	for (int j = 0; j < 5000; j++)
												sum[i] += b[j][i]*a[j];
}
return 0;
}
