#include<stdio.h>
main(){
	char continent;
	int country;
	printf("Enter your Continent('A' for Asia ,'E' for Europe) ");
	scanf(" %c",&continent);
	
	switch(continent)
	{
		
        case 'A':
        case 'a':
		printf("you belong to Asia");
		printf("1.PAKISTAN\n");
		printf("2.INDIA\n");
		printf("Choose your country\n");
		scanf("%d" ,&country);
		switch(country)
		{
			case 1:
				printf("You are living in PAKISTAN\n");
				break;
			case 2:
				printf("You are living in INDIA\n");
				break;
			default:
				printf("You are living Outside the Earth\n");
		}
		break;
		
	     case 'E':
	     case 'e':
	     printf("You belong to Europe\n");
	     printf("1.FRANCE\n");
	     printf("2.GERMANY\n");
	     printf("Choose your country\n");
	     scanf("%d", &country);
		 switch(country)
		 {
		    case 1:
		        printf("You are living in FRANCE\n");
		        break;
		    case 2:
		    	printf("You are living in GERMANY\n");
		    	break;
		    default:
		    	printf("You are out of The Universe\n");
	    }
	    break;
	    default:
	    	printf("You are not a human\n");
    }
	return 0;	
}