#include<stdio.h>
int sum(int n)
{
	if(n > 1)
	{
		printf("%d^2 + ",n);
		return n*n + sum(n-1);
	}
	else
	{
		printf("1^2");
		return 1;	
	}	
}
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("\nResult : %d", sum(n));
	return 0;
}
