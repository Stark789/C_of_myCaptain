#include<stdio.h>

 int main()
 {
 	int a;
 printf("Enter your number");
 scanf("%d",&a);
 switch(a)
 {
 	case 1:
 		{
 		    printf("Food item - Pizza\nPrice - RS239");
 		    break;
		 }
	case 2:
		{
			printf("Food item - Burger\nPrice - RS129");
			break;
		}
 	case 3:
 		{
 			printf("Food item - Pasta\nPrice - RS179");
 			break;
		 }
 	case 4:
 		{
 			printf("Food item - French Fries\nPrice - RS99");
			 break;
		 }
	case 5:
	    {
	    	printf("Food item - Sandwich\nPrice - RS149");
	    	break;
			 }	 
	
	default:
		printf("INVALID NUMBER");
	}
 }
 
 
