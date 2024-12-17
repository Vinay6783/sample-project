#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, d, x1, x2;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	printf("Enter the value of b: ");
	scanf("%f",&b);
	printf("Enter the value of c: ");
	scanf("%f",&c);
	
	d = b*b - 4*a*c ;
	printf("f(x) = %fx^2 + %fx + %f",a,b,c);
	
	if(d > 0)
	{
		x1 = (-b + sqrt(d)) / (2*a) ;
	    x2 = (-b - sqrt(d)) / (2*a) ;
	    printf("Roots are real and distinct\nThey are: %f , %f", x1, x2) ;
	}
	else if(d == 0)
	{
		x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a) ;
		x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a) ;
		printf("Roots are real and equal\nThey are: %f , %f", x1, x2) ;
	}
	else
	{
		x1 = -b / (2*a) ;
		x2 = sqrt(-d) / (2*a) ;
		printf("Roots are complex.\nThey are: %f+i%f , %f-i%f",x1,x2 , x1,x2) ;
	}
	return 0;
}
