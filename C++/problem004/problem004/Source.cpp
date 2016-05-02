#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	unsigned short year;
	while (cin >> year)
	{
		cout << (!(year % 4) && (year % 100) || !(year % 400) ? "╢|" : "ен") << "ж~\n";
	}
	return 0;
}