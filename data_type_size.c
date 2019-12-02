/*This program shows datatype sizes and the max min values */
#include<stdio.h>
#include<math.h> 
void size()
{
	printf(" size of int is %d",sizeof(int));
	printf("\n size of float is %d",sizeof(float));
	printf("\n size of long int is %d",sizeof(long int));
	printf("\n size of char is %d",sizeof(char));
	printf("\n size of double is %d\n",sizeof(double));
	
}
void max_min2() 
{ 
   int max = (int)pow(2.0,sizeof(int)*8);
   long int maxl = (long int)pow(2.0,sizeof(long int)*8);
   char maxc = (char)pow(2.0,sizeof(char)*8);
   long long int maxll = (long long int)pow(2.0,sizeof(long long int)*8);
   printf("max long integer %ld\n", maxl++);
   printf("min long integer %ld\n", maxl);
   printf("max integer %d\n", max++);
   printf("min integer %d\n", max); 
   printf("max character %d\n", maxc++);
   printf("min character %d\n", maxc);
   printf("max long long integer %lld\n", maxll++);
   printf("min long long integer %lld\n", maxll); 

   /*FLoat and double have same max min values as int and long long int*/
    
} 
int main()
{
	size();
	max_min2();
}