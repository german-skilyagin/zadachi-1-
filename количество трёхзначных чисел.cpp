#include <string>
#include <iostream>
using namespace std;

int main() {
	int n, c = 0, sum = 0;
	cin >> n;
	string s;
	for (int i = 100; i < 1000; i++) {
		s = to_string(i);
		sum = (s[0] - 48) + (s[1] - 48) + (s[2] - 48);
		if (sum == n) {
			c++;
			
		}
		
	}
	cout << c;




	return 0;

}