#include<stdio.h>
int main()
{
	int a , b, min, i,h;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	if(a < b)
		min = a;
	else
		min = b;
	for(i = 1; i <= min; i++)
	{
		if(a % i == 0 && b % i == 0)
			h = i;
	}
	printf("HCF : %d", h);
	return 0;
	
}
