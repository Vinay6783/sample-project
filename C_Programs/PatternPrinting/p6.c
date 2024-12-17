#include<stdio.h>
int main()
{
	int n,j,i,k,l,m;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i = 0; i <= n; i++)
	{
		k = 1;
		l = i ;
		m = (2*i+1)/2 + 1;
		for(j = 0; j <= 2*(n-i); j++)
			printf(" ");
		for(j = 1; j <= 2*i+1; j++)
		{
			if(j == m )
				printf("0 ");
			else if( j > m)
				printf("%d ", k++);
			else
				printf("%d ", l--);	
		}
		printf("\n");
	}
	return 0;	
}
