#include<stdio.h>
int main()
{
	float c ,f;
	printf("Enter temperature (in Centigrade): ");
	scanf("%f", &c);
	f = 9*c/5 + 32;
	printf("\nTemperature in Fahrenheit: %f", f);
	return 0;
}
