#include<stdio.h>
#include<stdlib.h>
#include<time.h>
unsigned long long int fact( unsigned long long int n)
{
if(n==1)
	return 1;
else
	return n*fact(n-1);
}
int main(void)
{
	unsigned long long int n=0;
	printf("Enter a number = ");
	scanf("%lu",&n);
	clock_t start, end;
     float cpu_time_used=0.0;
      start = clock();
	printf("\nThe factorial of the number is = %llu",fact(n));
	end = clock();
     cpu_time_used += ((float)(end - start)) / CLOCKS_PER_SEC;
     printf("\ntime taken = %lf",cpu_time_used);
}