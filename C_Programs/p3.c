#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter third number: ");
	scanf("%d",&c);
	
	if(a > b)
	{
		if(a > c)
			printf("Maximum = %d", a);
		else
			printf("Maximum = %d", c);
	}
	else if(b > c)
		printf("Maximum = %d", b);
	else
		printf("Maximum = %d", c);
		
	return 0;
}

