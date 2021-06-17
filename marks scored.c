#include<stdio.h>
main()
{
	int n=0;
	printf("enter the marks: ");
	scanf("%d",&n);
	if( n>=85 && n<=100)
	{
		printf("grade A");
	}
	else if (n>=70& n<=84)
	{
		printf("grade B");
	}
	else if( n>=55 && n<=69)
	{
		printf("grade C");
	}
	else if( n>=40 && n<=54)
	{
		printf("grade D");
	}
	else  
	{
		printf("grade F");
	}
	return 0;
}
