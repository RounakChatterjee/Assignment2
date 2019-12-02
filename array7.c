#include<stdio.h>
#include<stdlib.h>
#include <gsl/gsl_statistics.h>

double* stats(double arr[],int len)// a functin that takes array of arbitary length
{
	
int i ;
double* stat = malloc(2* sizeof *stat);
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
	double *p = NULL;
	p = (double*)malloc(100 * sizeof *p);
	int i = 0;
	for(i = 0;i<100;i++)
		{p[i] = (i+1)*(i+1);}
	printf("Computed The Mean of the numbers = %f\n",stats(p,100)[0]);
	printf("Computed The variance of the numbers = %f\n",stats(p,100)[1]);
	printf("GSL Computed The Mean of the numbers = %f\n",gsl_stats_mean(p,1,100));
	printf("GSL Computed The variance of the numbers = %f\n",gsl_stats_variance(p,1,100));
	free(p);
}