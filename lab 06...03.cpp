#include<stdio.h>
int main ()
{
	int device;
	int brand;
	
	printf("Enter your device: ");
	printf("1.Phone\n");
	printf("2.Laptop\n");
	printf("Choose your device(1/2)\n");
	scanf("%d" ,&device);
	switch(device)
	{
		case 1:
			printf("You are using a phone!\n");
			printf("1.Samsung\n");
			printf("2.Apple\n");
			printf("Choose your brand (1/2)\n");
			scanf("%d" ,&brand);
			switch (brand)
			{
				case 1:
				printf("you are using samsung\n");
				break;
				case 2:
				printf("you are using apple\n");
				break;
				default:
				printf("your brand is Invalid\n");
			}
	    	break;
	    	
	    case 2:
	    	printf("You are using a laptop!\n");
	    	printf("1.Dell\n");
	    	printf("2.HP\n");
	    	printf("Choose your brand (1/2)\n");
	    	scanf("%d" ,&brand);
	    	switch(brand)
	    	{
	    		case 1:
	    			printf("You are using Dell!\n");
	    			break;
	    		case 2:
	    			printf("You are using HP\n");
	    			break;
	    		default:
	    			printf("Your brand is Invalid\n");
			}
			break;
		default:
			printf("Invalid device chosen!\n");
	}
}