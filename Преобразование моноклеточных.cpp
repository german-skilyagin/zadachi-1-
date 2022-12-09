#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int n, m, p, g;
void f(int t) {
	t /= g;
	for (int i = 2; i * i <= t; i++) {
		while (t / i == 0) {
			t /= i;
			p++;
		}
		p += t > 1;
	}
}

int main() {
	cin >> n >> m;
    g = __gcd(n, m);
	f(n);
	f(m);
	cout << p;
}