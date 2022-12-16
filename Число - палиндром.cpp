#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, t, f, mass = 0;
    vector<int>mas;
    string m, list = "0123456789qwertyuiopasdfghjklzxcvbnm";
    cin >> n;
    for (int e = 2; e <= 36; e++) {
        m = "";
        t = n;
        f = 0;
        while (t > 0) {
            m = list[t % e] + m;
            t /= e;
        }
        for (int i = 0; i <= m.size() / 2; i++) {
            if (m[i] != m[m.size() - 1 - i]) {
                f++;
                break;
            }
        }
        if (f == 0) {
            mass++;
            mas.push_back(e);
        }
    }
    if (mass == 1) {
        cout << "unique\n";
    }
    else {
        if (mass == 0) {
            cout << "none\n";
        }
        else {
            cout << "multiple\n";
        }
    }
    for (auto i : mas) cout << i << ' ';
    return 0;
}