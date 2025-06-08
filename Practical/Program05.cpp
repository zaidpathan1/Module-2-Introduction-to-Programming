#include<stdio.h>
main()
{
	int j=1;
	//while loop
	printf("while loop\n");
	while(j<=10)
	{
		printf("%d\n",j);
		j++;
	}
	
	//for loop
	printf("\nfor loop\n");
	for(int i=1; i<=10;i++)
	{
		printf("%d\n",i);
	}
	
	j=1;
	printf("\ndo while loop\n");
	do
	{
		printf("%d\n",j);
		j++;
	}while(j<=10);
}
