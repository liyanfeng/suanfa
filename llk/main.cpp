#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	for (i=0;i<7;i++)
	{
		for (j=0;j<10;j++)
		{
			printf("%d ",(rand()%5+1));
		}
		printf("\n");
	}
	return 0;
}