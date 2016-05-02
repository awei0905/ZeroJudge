#include <iostream>

using namespace std;

int main(int argv, int* argc[])
{
	short M, D;
	while (cin >> M >> D)
	{
		switch ((M*2+D)%3)
		{
		case 0:
			cout << "´¶³q";
			break;
		case 2:
			cout << "¤j";
		case 1:
			cout << "¦N ";
			break;
		}
		cout << "\n";
	}
	return 0;
}