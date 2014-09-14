#include "Father.h"
#include "Son.h"
#include<stdio.h>

int a[10];
long double count=0;
void dddd(int n,int num)
{
	int i=0;
	if (n==num)
	{
		count++;
		//printf("%d: ",count);
		/*for(i=0;i<10;i++)
		{
			printf("%d ",a[i]);
		}*/
		//printf("\n");
		
		return;
	}
	
	for (i=((n==0)?1:a[n-1]+1);i<=(100-(num-1)+n);i++)
	{
		a[n]=i;
		if (i>100-(num-1)+n)
		{
			break;
		}
		dddd(n+1,num);
	}
}

int main()
{
	dddd(0,5);
	printf("%llf: ",count);
	return 0;
}