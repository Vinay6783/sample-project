#include<stdio.h>
int main()
{
	int n,i,j;
	char k;
	//scanf("%d",&n);
	for(i = 1; i <= 7; i++)
	{
		k = 'a';
		if(i <= 4)
		{
			for(j = 1; j <= 5-i; j++)
			{
				printf("%c ", k);
				k++;
			}
			for(j = 1; j <= 2*i-3; j++)
			{
				printf("  ");
				k++;
			}	
			if(i == 1)
				printf("e f g");
			else
			{
				for(j = 1; j <= 5-i; j++)
				{
					printf("%c ", k);
					k++;
				}
			}
		}
		else
		{
			for(j = 1; j <= i/2; j++ )
				printf("%c ", k++);
			for(j = 1; j <= 2*(7-i)-1; j++)
			{
				printf("  ");
				k++;
			}
			for(j = 1; j <= i/2; j++ )
				printf("%c ", k++);
			if(i == 7 && j == 4)
				printf("g ");
		}
		printf("\n");
	}
	return 0;
}
