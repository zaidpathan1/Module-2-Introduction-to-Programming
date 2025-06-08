#include<stdio.h>
#include<string.h>

int main()
{
	char src[] = "Hello ";
	char src1[] = "World!";
	
	strcat(src, src1);
	printf("Concentrated String %s\n",src);
	printf("Length of string: %zu\n", strlen(src)); 
	return 0;
}
