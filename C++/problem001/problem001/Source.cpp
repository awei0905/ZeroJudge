#include <iostream>
#include <string>

using namespace std;

int main(int argv, char* argc[])
{
	string buf;
	while (cin >> buf)
	{
		cout << "hello, " << buf << endl;
	}
}