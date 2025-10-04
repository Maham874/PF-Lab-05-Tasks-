#include <stdio.h>
int main()
{
	float marks;
	printf("Enter Student's Marks: '");
	scanf("%f" ,&marks);
	
	if(marks>=50)
	{
		if(marks>=85)
		{
			printf("PASSED WITH DISNTINCTION!\n");
		}
		else 
		{
			printf("JUST PASSED!\n");
		}
	}
	else 
	{
		printf("Failed\n");
	}
	
	return 0;
	
}