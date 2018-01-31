#include<stdio.h>
main()
{
	int a;
	printf("enter the year\n");
	scanf("%d",&a);
	if(a%4==0)
	printf("it is a leap year\n",a);
	else
	printf("not a leap year",a);
}
