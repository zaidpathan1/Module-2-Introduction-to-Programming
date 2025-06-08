#include<stdio.h>
int main()
{
	int age = 22;
	int *ptr = &age;
	
	printf("Value of the age : %d\n", age);
	
	*ptr = *ptr-1;
	
	printf("Value of the age after the reduction through pointer : %d", age);
	
	return 0;
}
