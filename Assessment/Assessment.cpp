#include<stdio.h>
#include<string.h>
//declaration

void arithmat();
int addition(int num1, int num2);
int subtract(int num1, int num2);
int multipli(int num1, int num2);
float division(int num1, int num2);

int main()
{
	arithmat();	
	return 0;
}

//definition of the functions

void arithmat()
{
	int choice , num1[2], repeat;
	char ab[6] = "First";
	char cd[] = "Second";
	
	
	printf("---------------MENU---------------\n\n");
	printf("1. Addition \n2. Substraction \n3. Multiplication \n4. Division \n\n");
	
	printf("Enter Your Choice : ");
	scanf("%d",&choice);
	
	if(choice>0 && choice<5)
	{
		for(int i=0; i<2;i++)
		{
			printf("\nEnter Your %s Number : ",ab);
			scanf("%d",&num1[i]);
			strcpy(ab, cd);
		}
	}
	
	//Switch case for choice
	switch(choice){
		case 1:
			printf("\nAddition = %d",addition(num1[0], num1[1]));
			break;
		case 2:
			printf("\nSubstraction = %d",subtract(num1[0], num1[1]));
			break;
		case 3:
			printf("\nMultiplication = %d",multipli(num1[0], num1[1]));
			break;
		case 4:
			printf("\nDivision = %f",division(num1[0], num1[1]));
			break;
		default:
			printf("Invalid choice!!!");
	}
	printf("\nDo you want to continue again? Press 1 for yes.");
	scanf("%d",&repeat);
	printf("\n");
	
	//Repeating of the full menu section
	if(repeat==1){
		arithmat();
	}
}


//Arithmetic functions

int addition(int num1, int num2)
{
	return num1 + num2;
}
int subtract(int num1, int num2)
{
	return num1 - num2;
}
int multipli(int num1, int num2)
{
	return num1 * num2;
}
float division(int num1, int num2)
{
	float a = num1; float b = num2;
	return a / b;
}

