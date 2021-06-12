#include <stdio.h>
int main()
{
	int choice;
	printf("Hii, Choose a number of your choice!:- \n1. \n2. \n3. \n4. \n5. \n");
	scanf("%d",&choice);
	switch(choice)
	{ case 1 : 
	printf("\n Food item - Burger");
	printf("\n Price - Rs 129");
	break;
	 case 2 :
    printf("\n Food item - Pasta");  
	printf("\n Price - Rs 179");
	break;
	 case 3 :
	printf("\n Food item - Pizza");  
	printf("\n Price - Rs 239");
	break;
	case 4 :
	printf("\n Food item - French Fries");  
	printf("\n Price - Rs 99");
	break;
	case 5 :
	printf("\n Food item - Sandwich");  
	printf("\n Price - Rs 149");
	break;
	default:
		printf("Invalid Choice--BE HUNGRY!!!");
	 		}
	 		return 0;
	 	
	}
