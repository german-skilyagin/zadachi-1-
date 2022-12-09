
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

	int per = 1, max = 0, min = 0, n = 0;

	cin >> n;

	vector<int> a(n), s(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s[i] = a[i];
	}

	sort(s.begin(), s.end());
	s.push_back(-1100000);

	for (int i = 0; i < n; i++) {
		if (s[i] != s[i + 1]) {
			if (per > max) {
				max = per;
				min = s[i];
			}
			per = 1;
		}
		else per++;
	}

	for (int i = 0; i < n; i++)
		if (a[i] != min)
			cout << a[i] << ' ';

	for (int i = 0; i < max; i++) cout << min << ' ';

	return 0;
}