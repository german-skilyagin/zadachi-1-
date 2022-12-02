#include <iostream>
using namespace std;
int main()
{
	int n{};
	int m{};

	cin >> m >> n;

	bool G = true;
	bool G2 = false;
	bool B = false;

	while (n || m)
	{
		if (G)
		{
			if (n)
			{
				std::cout << 'G';
				--n;
			}
			G = false;
			G2 = true;
		}
		if (G2)
		{
			if (n)
			{
				std::cout << 'G';
				--n;
			}
			G2 = false;
			B = true;
		}
		if (B)
		{
			if (m)
			{
				cout << 'B';
				--m;
			}
			G = true;
			B = false;
		}
	}
}