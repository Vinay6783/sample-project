#include<stdio.h>
int main()
{
	int num ;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num > 0)
		printf("A positive number.");
	else if(num < 0)
		printf("A negative number.");
	else
		printf("Zero");
		
	return 0;
}
