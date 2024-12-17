#include<stdio.h>
int main()
{
	int n,i,j;
	char k = 'A';
	printf("Enter n: ");
	scanf("%d", &n);
	for(i = 1; i <= n ; i++)
	{
		for(j = 1 ; j <= i-1 ; j++)
			printf(" ");
		k = 'A';
		for(j = n ; j >= i; j--)
		{
			printf("%c ", k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
