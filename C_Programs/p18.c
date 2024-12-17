#include<stdio.h>
#include<math.h>

int sum(int n)
{
	if(n > 1)
		return (n*n*pow(-1, n)) + sum(n-1);
	else
		return 1;
}
int main()
{
	int n;
	int s;
	printf("Enter a number: ");
	scanf("%d",&n);
	s = sum(n);
	printf("Sum: %d", s);
	return 0;
}
