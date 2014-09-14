#include <stdio.h>
#include <time.h>
int main()
{
	int max[65536]={0};
	unsigned long i=0,j=0,tmp=0;
	clock_t t = clock();
	for (i=1;i<=65535;++i)
	{
		
		for (j=i;j<=65535;++j)
		{
			tmp=i*j;
			if (tmp<=65535)
			{
				max[tmp]+=2;
				if (i==j)
				{
					max[tmp]-=1;
				}
			}
			else
			{
				j=66666;
			}
		}
	}
	j=0;
	for (i=1;i<=65535;++i)
	{
		if (max[i]%2==1)
		{
			 ++j;
		}
	}
	clock_t t2 = clock();
	printf("count: %d\n %f",j,(double)(t2-t)/1000);
	return 0;
}