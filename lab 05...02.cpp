#include<stdio.h>
int main()
{
	int age;
	char gender;
	
	printf("Enter the Age: ");
	scanf("%d" ,&age);
	
	printf("Enter the Gender(M/F): ");
	scanf(" %c" ,&gender);
	
	if(age>=18 && gender== 'M')
	{
		printf("Adult Male\n");
	}
	else if (age>=18 && gender=='F')
	{
		printf("Adult Female\n");
	}
	else 
	{
		printf("Minor\n");
	}
} 