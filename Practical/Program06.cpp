#include<stdio.h>
main()
{
	for(int i=1; i<=10;i++)
	{
		if(i==3)
		{
			continue;
		}
		else if(i>5)
		{
			break;
		}
		printf("%d\n",i);
	}
}
