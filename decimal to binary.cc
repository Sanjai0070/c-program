#include<stdio.h>
int convert(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return (n%2+10*convert(n/2));
	}
}
int main()
{
	int dec=13;
	printf("the given decimal %d to binary is %d",dec,convert(dec));
	return 0;
}
