//square.cpp
#include<iostream>
#include<string>

using std::cout;	using std::cin;
using std::endl;	using std::string;
int main()
{
	string::size_type square_len = 5;
	for (int r = 0; r < square_len; r++)
	{
	 string row(square_len, "*");
		cout << row <<endl;
	}
	cout << endl;

	return 0;
}