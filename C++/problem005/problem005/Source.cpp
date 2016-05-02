#include <iostream>

using namespace std;

int main(int argv, int* argc[])
{
	short times, i, input[4];
	cin >> times;
	while (times--)
	{
		for (i = 0; i < 4; i++)
		{
			cin >> input[i];
			cout << input[i] << " ";
		}
		input[0] -= input[1];
		for (i = 1; i < 3; i++)
		{
			if (input[i] - input[0] != input[i + 1])
			{
				cout << input[3] * input[2] / input[1];
				break;
			}
		}
		if (i == 3)
			cout << input[3] - input[0];
		cout << endl;
	}
	return 0;
}