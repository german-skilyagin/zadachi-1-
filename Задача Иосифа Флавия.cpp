#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector <int> a(n);
	int m = 0;
	for (int i = 0; i < n; i++) a[i] = i + 1;
	while (a.size() > 1) {

		m += k - 1;
		m = m % a.size();
		a.erase(a.begin() + m);
	}
	
	cout << a[0];
	
	return 0;
}