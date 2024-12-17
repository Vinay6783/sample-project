#include<stdio.h>
#include<string.h>
int main()
{
	int max = 100, len = 100, n, i, j;
	char names[max][len], temp[len];
	printf("Enter th number of names: ");
	scanf("%d",&n);
	getchar();
	printf("Enter the names:\n");
	for(i = 0; i < n; i++)
	{
		fgets(names[i], len, stdin);
		names[i][strcspn(names[i], "\n")] = '\0';	
	}
	for(i = 0 ; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(strcmpi(names[i],names[j]) > 0)
			{
				strcpy(temp, names[i]);
				strcpy(names[i], names[j]);
				strcpy(names[j], temp);
			}
		}
	}
	printf("\nNames sorted in alphabetical order: \n");
	for(i = 0; i < n; i++)
		printf("%s\n",names[i]);
	return 0;
}

