#include<stdio.h>
int main()
{
	int n,temp,r,s=0,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp = n;
	while(n != 0)
	{
		r = n % 10;
		n = n / 10;
		s = s + r*r*r ;
	}
	if(temp == s)
		printf("Is an Armstrong Number.");
	else
		printf("Not an Armstrong Number.");
	return 0;
}
