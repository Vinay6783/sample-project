#include<stdio.h>
int main()
{
	int n , r, max = 0 ;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n != 0)
	{
		r = n % 10;
		n = n / 10;
		if(r > max)
			max = r;
	}
	printf("The maximum digit is: %d", max);
	return 0;
}
