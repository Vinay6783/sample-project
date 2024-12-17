#include<stdio.h>
int main()
{
	int n, a = 1, b = 0, fib,i;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Fibonacci series till n: ");
	for(i = 1; i <= n; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%d ", fib);
	}
	return 0;
}
