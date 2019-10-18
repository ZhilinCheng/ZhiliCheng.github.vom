#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_io.hpp>
#include <string>
#include <iostream>
using namespace std;
void Print(const boost::tuple<string, int, int>& person)
{
	cout << "Name: " << person.get<0>() << "; Age: "
		<< person.get<1>() << "; Length: " << person.get<2>() << endl;
}

int main()
{
	using boost::tuple;
	typedef boost::tuple<string, int, int> Person;
	// Create person instances.
	Person p1 = boost::make_tuple(string("Ray"), 26, 178);
	Person p2 = boost::make_tuple(string("Carl"), 24, 175);
	Person p3 = boost::make_tuple(string("Alice"), 25, 165);
	p1.get<1>() += 3;
	p2.get<1>() += 3;
	p3.get<1>() += 3;
	Print(p1);
	Print(p2);
	Print(p3);
	getchar();
}