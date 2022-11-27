#include <iostream>
using namespace std;

void rec() {
	int n;
	cin >> n;
	if (n != 0) {
		rec();
		cout << n;
	}
}


int main() {

	rec();






	return 0;
}
