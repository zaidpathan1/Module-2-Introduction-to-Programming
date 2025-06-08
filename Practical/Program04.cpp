#include<stdio.h>
main () {
	int num1;
	
	printf("Enter a number : ");
	scanf("%d", &num1);
	
	
	if (num1 % 2 == 1) {
		printf("%d is an odd number\n", num1);
	}
	else 
	{
		printf("%d is an even number\n", num1);
	}
	
	switch(num1){
		case 1:
		printf("1 for January");
		break;
		case 2:
		printf("2 for February");
		break;
		case 3:
		printf("3 for March");
		break;
		case 4:
		printf("4 for April");
		break;
		case 5:
		printf("5 for May");
		break;
		case 6:
		printf("6 for June");
		break;
		case 7:
		printf("7 for July");
		break;
		case 8:
		printf("8 for August");
		break;
		case 9:
		printf("9 for September");
		break;
		case 10:
		printf("10 for October");
		break;
		case 11:
		printf("11 for November");
		break;
		case 12:
		printf("12 for December");
		break;
		default:
		printf("Number not applicable for the month");
	}
	
}
