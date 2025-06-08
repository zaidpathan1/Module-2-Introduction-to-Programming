#include<stdio.h>
int factorial(int number);

main()
{
	int number;
	printf("Enter the number : ");
	scanf("%d", &number);
	if(number >=0)
	{
		printf("\nFactorial of the number is : %d",factorial(number));
	}
	else
	{
		printf("\nWrong Choice");
	}
}

int factorial(int number)
{
	if(number == 0)
	{
		return 1;
	}
	return number * factorial(number-1);
}

