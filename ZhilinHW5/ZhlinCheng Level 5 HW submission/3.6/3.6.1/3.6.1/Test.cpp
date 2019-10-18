#include "Array.hpp"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	Array array(1);
	 //cout << array[2] << endl; error will occur
	try
	{
		cout << array[2];
	}
	catch (int error)
	{
		if (error == -1)
		{
			cout << "Index out of bound." << endl;
		}
	}
	system("pause");
	return 0;
}