#include<stdio.h>
int main()
{
	int a, b, i, l, min;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	min = a > b ? b : a ;
	for(i = min ; i <= a*b ; i++)
	{
		if(i % a == 0 && i % b == 0)
			{
				l = i;
			    break;
			}
	}
	printf("LCM: %d", l);
	return 0;
	
}
