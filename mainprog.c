#include<stdio.h>
#include<stdlib.h>
#include "statsh.h"
int main(void)
{
	float *p = NULL;
	p = (float*)malloc(100 * sizeof *p);
	int i = 0;
	for(i = 0;i<=100;i++)
		{p[i] = (i+1)*(i+1);}
	printf("The Mean of the numbers = %f\n",stats(p,100)[0]);
	printf("The variance of the numbers = %f\n",stats(p,100)[1]);
	free(p);
}