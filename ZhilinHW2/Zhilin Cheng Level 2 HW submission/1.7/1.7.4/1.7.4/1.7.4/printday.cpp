#include <stdio.h>
int main()
{
	int nday = 0;
	void DayName(int n_Day);
	printf("Please input a day number from 1 to 7 \n");
	scanf_s("%d", &nday);
	DayName(nday);
}



void DayName(int nDay)
{
	char day_string[7][10] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday",
								"Saturday" };
	printf("Day %d is a %s.\n", nDay, day_string[nDay - 1]);

}
