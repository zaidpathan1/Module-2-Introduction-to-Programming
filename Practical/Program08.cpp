#include<stdio.h>
int factorial(int number);

main()
{
	int num[5] = {23, 32, 25, 22, 44};
	int num2[3][3] = {{23, 32, 25}, {54, 22, 43}, {47, 33, 63}};
	for (int i=0; i<5;i++)
	{
		printf("%d\n", num[i]);
	}
	int sum = 0;
	for (int i=0; i<3;i++)
	{
		for (int j=0; j<3;j++)
		{
			sum += num2[i][j];
		}
	}
	printf("\nTotal sum of num2 is : %d",sum);
}


