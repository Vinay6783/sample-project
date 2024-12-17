#include<stdio.h>
int main()
{
	int n,i,j;
	char k;
	printf("Enter n: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		k = 'A';
		for(j=1;j<=2*(n-i);j++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c ",k);
			k += 2;
		}
		printf("\n");
	}
	for(i=1;i<n;i++)
	{
		k = 'A';
		for(j=1;j<=2*i;j++)
			printf(" ");
		for(j=1;j<=2*(n-i)-1;j++)
		{
			printf("%c ",k);
			k += 2;
		}
		printf("\n");
	}
	return 0;
}
