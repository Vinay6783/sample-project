#include<stdio.h>
int main()
{
	int n,i,j,k,min,temp;
	printf("Enter n: ");
	scanf("%d", &n);
	int a[n];
	printf("The elements of array are: ");
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i = 0; i < n; i++)
	{
		min = a[i];
		k = i;
		for(j = i; j < n; j++)
		{
			if(a[j] < min)
			{
				min = a[j];
				k = j;
			}
		}
		
		temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
	printf("\nThe Sorted Array: ");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);
	return 0;	
}
