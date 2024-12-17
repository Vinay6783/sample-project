#include<stdio.h>
int main()
{
	int a,n,r,temp,count = 0,i = 1,j=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	a = n;
	while(n != 0)
	{
		n = n / 10;
		count++;	
	}
	int b[count];
	while(a != 0)
	{
		r = a % 10;
		a = a / 10;
		b[count-i] = r;
		i++;
	}
	while(j < count)
	{
		if(j % 2 == 0)
		{
			temp = b[j];
			b[j] = b[j+1];
			b[j+1] = temp;	
		}
		j++;
	}
	printf("New Number: ");
	for(i = 0 ; i <count; i++)
		printf("%d",b[i]);
	return 0;
}
