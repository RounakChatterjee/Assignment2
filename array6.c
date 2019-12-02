/*This program depicts the way to write data to a binary file and then extract data from bunary file to be used for calculations
The path depicted is my computer local address and must be changed to the save address of the computer in use to get desired results*/
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
		{p[i] = (i+1)*(i+1);}
	FILE *op;
	op = fopen( "file3.bin" , "wb" );
	 float* str = stats(p,100);
    fwrite(str , 4 , sizeof(float) , op );
   fclose(op);
	FILE *fp;
	 fp = fopen( "C:/Users/ROUNAK/Desktop/c programs/file3.bin" , "rb" );// path must be changed to local location for working of the program
	 float* out;
    fread(out , 4 , sizeof(float) , fp );
   fclose(fp);
   printf("mean = %f",out[0]);
   printf("\nvariance = %f \n",out[1]);
	free(p);
}
