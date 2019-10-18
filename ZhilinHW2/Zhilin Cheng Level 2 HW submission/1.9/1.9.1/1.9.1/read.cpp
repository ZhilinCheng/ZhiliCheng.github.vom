#include <stdio.h>
#include <windows.h>
int main()
{
	int c=0;
 
	while (c != 1)
	{
		c = getchar();
		if (c == 10) //ensure using enter
		{
 			putchar(4);  // cout something to track
		}

	}
	printf("CTRL + A is a correct ending.\n");
	system("pause");

	return 0;
}