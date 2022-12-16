#include <cstdio>
#include <cassert>
#include <string>
#include <climits>
#include <stdio.h>
using namespace std;
int divRound(int a, int b) {
	assert(a >= 0);
	assert(b > 0);
	assert(a <= INT_MAX - b / 2);
	return (a + b / 2) / b;
}

int main() {
	int n;
	scanf("%d", &n);
	int minTimeMIN = 24 * 60 + 1;
	string best;
	for (int i = 0; i < n; i++) {
		char buffer[50 + 1];
		int h1, h2, m1, m2;
		int code = scanf(" \"%50[^\"]\" %d:%d %d:%d", buffer, &h1, &m1, &h2, &m2);
		assert(code == 5);
		int hm1 = h1 * 60 + m1;
		int hm2 = h2 * 60 + m2;
		int timeMin;
		if (hm1 < hm2) {
			timeMin = hm2 - hm1;
		}
		else {
			timeMin = hm2 - hm1 + 24 * 60;
		}

		if (timeMin < minTimeMIN) {
			minTimeMIN = timeMin;
			best = buffer;
		}
	}
	printf("The fastest train is \"%s\".\n", best.c_str());
	printf("Its speed is % d km / h, approximately.", divRound(650 * 60, minTimeMIN));
	return 0;
}