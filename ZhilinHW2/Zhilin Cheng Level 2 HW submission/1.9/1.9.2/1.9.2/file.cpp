#include <stdio.h>
#include <windows.h>
int main()
{
	char filename[100];
	FILE* fp;
	errno_t err; //indicate whether the file is opened
	printf("Please enter the file name\n ");
	scanf_s("%s", &filename); //input the file name
	err = fopen_s(&fp, filename, "w");//test if the file is open

	if (err == 0)
 	{
		printf("The file was opened\n");
	}
	else
	{
	    printf("The file was not opened\n");
	}

	int c = 0;
 	while ((c=getchar()) != 1)
	{
 		if (c == 10) //ensure using enter
		{
			fputc(c, fp);
			
		}

	}
	printf("CTRL+A is a correct ending.\n", fp); 
	
		fclose(fp);
	
	system("pause");

	return 0;
}