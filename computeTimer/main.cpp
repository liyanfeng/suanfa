#include <stdio.h>
int main()
{
	double per,div,cnt,result;

	while (1)
	{
		printf("input per:");
		scanf("%lf",&per);
		printf("input div:");
		scanf("%lf",&div);
		printf("input cnt:");
		scanf("%lf",&cnt);
		result=(double)50800000;
		result/=(per+1);
		result/=div;
		result=1/result;
		result*=cnt;
		printf("result=%lf\n",result);
	}
	return 0;
}