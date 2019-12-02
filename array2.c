#include<stdio.h>
#include<stdlib.h>
float* stats(float arr[],int len)// a functin that takes array of arbitary
{
	
int i ;
float* stat = malloc(2* sizeof *stat);
stat[0] = 0.0;
stat[1] = 0.0;

for(i = 0;i<len;i++)
{
	stat[0]+=arr[i];
	stat[1]+=arr[i]*arr[i];
}
stat[0] = stat[0]/(float)len;
stat[1] = stat[1]/(float)len;
stat[1] = (stat[1] - stat[0]*stat[0]);
return stat;
} 
int main(void)
{
	float *p = NULL;
	p = (float*)malloc(100 * sizeof *p);
	int i = 0;
	for(i = 0;i<100;i++)
		{
			printf("%d\n",p[i]);
			p[i] = (i+1)*(i+1);
		}
	printf("The Mean of the numbers = %f\n",stats(p,100)[0]);
	printf("The variance of the numbers = %f\n",stats(p,100)[1]);
	free(p);
}