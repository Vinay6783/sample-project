#include<stdio.h>
int main()
{
	float n1, n2,result;
	char ch;
	printf("Enter first number: ");
	scanf("%f",&n1);
	printf("Enter second number: ");
	scanf("%f",&n2);
	printf("\nEnter a - Addition \n      b - Subtraction\n      c - Multiplication \n      d - Division\n");
	scanf(" %c", &ch);
	if(ch == 'a')
		printf("%f + %f = %f",n1, n2, n1+n2);
	else if(ch == 'b')
		printf("%f - %f = %f",n1, n2, n1-n2);
	else if(ch == 'c')
		printf("%f * %f = %f",n1, n2, n1*n2);
	else
		printf("%f / %f = %f",n1, n2, n1/n2);
		
	return 0;
}
