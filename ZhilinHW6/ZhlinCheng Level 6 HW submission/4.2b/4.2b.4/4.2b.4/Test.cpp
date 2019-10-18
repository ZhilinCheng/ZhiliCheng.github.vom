#include "Stack.cpp"
#include <iostream>
using namespace std;

int main()
{
	// Test defalut constructor.
	Stack<int> s0;

	// Test Push().
	for (int i = 0; i < 2; i++)
	{
		try
		{
			s0.Push(i);
		}
		catch (ArrayException& ex)
		{
			cout << ex.GetMessage() << endl;
		}
	}

	// Test copy constructor.
	Stack<int> s1(s0);

	// Test assignment operator.
	Stack<int> s2 = s0;

	// Test Pop().
	for (int i = 0; i < 4; i++)
	{
		try
		{
			cout << s0.Pop() << endl;
		}
		catch (ArrayException& ex)
		{
			cout << ex.GetMessage() << endl;
		}

		try
		{
			cout << s1.Pop() << endl;
		}
		catch (ArrayException& ex)
		{
			cout << ex.GetMessage() << endl;
		}

		try
		{
			cout << s2.Pop() << endl;
		}
		catch (ArrayException& ex)
		{
			cout << ex.GetMessage() << endl;
		}
	}
	getchar();
	return 0;
}