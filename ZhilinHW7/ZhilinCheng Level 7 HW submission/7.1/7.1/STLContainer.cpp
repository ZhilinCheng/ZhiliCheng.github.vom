#include <list>
#include <vector>
#include <map>
#include <iostream>
using namespace std;
int main()
{
	//create An list
	list <double> list1;
	for (int i = 0; i < 10; i++)
	{
		list1.push_back(i + 1);
	}
	cout << "The first element" << list1.front()<< " the last element" << list1.back() << endl;
	//create Vector
	vector<double> vector1(10);
	for (int i = 0; i < 10; i++)
	{
		vector1.push_back(i + 1);

	}
	for (int i = 0; i < vector1.size(); i++)
	{
		cout << vector1[i];
	}
	cout << endl;// \n
	// a map
	map<string, double> map1;
	string str[4] = { "0", "1", "2", "3" };
	for (int i = 0; i < 4; i++)
	{
		map1[str[i]] = i + 1;
	}
	for (int i = 0; i < 4; i++)
	{
		cout << map1[str[i]];
	}
	getchar();
}
 