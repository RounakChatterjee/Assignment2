/*Program depicts the writing of data to a binary file*/
#include<stdio.h>
#include<stdlib.h>
float* stats(float arr[],int len)// a function that takes array of arbitary length
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
		{p[i] = (i+1)*(i+1);}
	FILE *fp;
	 fp = fopen( "file2.bin" , "wb" );
	 float* str = stats(p,100);
    fwrite(str , 4 , sizeof(float) , fp );
   fclose(fp);
	free(p);
}
