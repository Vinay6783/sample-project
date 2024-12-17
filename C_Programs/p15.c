#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100];
	printf("Enter the string: ");
	gets(s);
	strcpy(s1,s);
	strrev(s);
	if(strcmp(s,s1) == 0)
		printf("Is a Palindrone.");
	else
		printf("Not a Palindrone.");
	return 0;
	
	
}
