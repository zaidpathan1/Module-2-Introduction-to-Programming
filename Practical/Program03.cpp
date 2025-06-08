#include<stdio.h>

main()
{
	int num1, num2;
	printf("\nEnter Your First Number : ");
	scanf("%d",&num1);
	printf("Enter Your Second Number : ");
	scanf("%d",&num2);
	float a = num1; float b = num2;
	
	//Arithmetic Operator
	printf("Arithmetic Operator :\n");
	printf("Addition : %d\nSubtraction : %d\nMultiplication : %d\nDivision : %f\nModulus : %d",num1+num2,num1-num2,num1*num2,a/b,num1%num2);
	
	//Relational Operator
	printf("Relational Operator :\n");
	if (num1 == num2) printf("First Number is equal to Second Number\n");
	if (num1 != num2) printf("First Number is not equal to Second Number\n");
	if (num1 > num2) printf("First Number is greater than Second Number\n");
	if (num1 < num2) printf("First Number is less than Second Number\n");
	if (num1 >= num2) printf("First Number is greater than or equal to Second Number\n");
	if (num1 <= num2) printf("First Number is less than or equal to Second Number\n");
	
	//Logical Operator
	//&& Logical And
	printf("Result is : %d\n",num1 < num2 && num2 == num1); 
	
	printf("\n");
	
	//|| Logical Or
	printf("Result is : %d\n",num1 < num2 || num2 == num1); 
	
	printf("\n");
	
	//!() Logical Not
	printf("Result is : %d\n",!(num1 < num2 || num2 == num1)); 
}
