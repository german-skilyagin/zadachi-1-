#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int k = 0, chisl;
    vector<int> a;
    while (true) {
        cin >> chisl;
        if (chisl == 0) break;
        a.push_back(chisl);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) {
        if (k + 1 < a[i]) break;
        k += a[i];
    }
    cout << endl << " " << k + 1;
}