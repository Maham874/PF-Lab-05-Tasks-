#include<stdio.h>
main()
{
	int a = 5;
	int b = 5;
	
	int x = ++a;
    int	y = b++;
	
	printf("a = %d , x = %d\n",a,x);
	printf("b = %d , y = %d",b,y);
	return 0;
}