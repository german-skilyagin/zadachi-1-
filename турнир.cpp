#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n > 3 && n % 2 == 0) {
		cout << n - (n + 1) % 2 + 1;
	}
	else if (n <= 3 && n % 2 == 0) {

		cout << n - (n + 1) % 2;
	}
	else if (n <= 3 and n % 2 != 0) {
		cout << n - (n + 1) % 2 - 1;
	}
	else {
		cout << n - (n + 1) % 2;
	}
	return 0;
}