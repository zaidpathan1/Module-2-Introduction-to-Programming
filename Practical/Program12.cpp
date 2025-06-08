#include<stdio.h>

main()
{
	FILE *fl1;
	char str[] = "This is the string";
	char ab[60];
	
	// Create and open a file in write mode
	fl1 = fopen("ab.txt", "w");
    if (fl1 == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    
    // Write string to file
    fprintf(fl1, "%s", str);
    
    // Close the file
    fclose(fl1);
    
    //Open the file in read mode
    fl1 = fopen("ab.txt", "r");
    if (fl1 == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    // Read and display contents
    printf("Contents of the file:\n");
    while (fgets(ab, sizeof(ab), fl1) != NULL) {
        printf("%s", ab);
    }
    
    fclose(fl1);
}
