#include<stdio.h>
int power(int a, int b)
{
	int p=1,i;
	for(i=1;i<=b;i++)
		p = p * a;
	return p;
}
int fact(int a)
{
	if(a > 1)
		return a * fact(a-1);
	else
		return 1;
}
float sum(int n, int x)
{
	float result = 0.0;
	int i = 2;
	for(i = 2; i <= n; i += 2)
	{
		result += (float)power(x, i) / fact(i);
	}
	return result ;
	
}
int main()
{
	int n,x;
	float s;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter x: ");
	scanf("%d", &x);
	
	s = x + sum(n,x) ;
	printf("Sum: %f", s);
	return 0;
}
