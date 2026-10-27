#include<stdio.h>
#include<limits.h>
void main()
{
	int a=400000000;
	unsigned int b=400000000;
	printf("a=%d,b=%u\n",a,b);
	printf("a=%d,b=%u\n",INT_MAX,UINT_MAX);
}
