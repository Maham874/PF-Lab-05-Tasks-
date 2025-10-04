#include<stdio.h>
main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	
	if(num % 2 == 0 && num % 3 ==  0)
	{
		printf("%d is divisible by both 2 and 3\n" ,num);
	}
	else 
	{
		printf("%d is NOT valid!\n" ,num);
	}
	
	return 0;
}