#include<stdio.h>
int main()
{
	int a=123,ori,reverse=0,rem;
	ori=a;
	while(a>0)
	{
	rem=a%10;
	reverse=rem*rem*rem;
	a/=10;
	}
	if(ori==reverse)
	printf("%d is a pallandrum",ori);
	else
	printf("%d is not a pallandrum",ori);
	return 0;
}
