
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    int n, m, c, x, y, mass = 0, f = 0, ch;
    string o = "", r = "";
    cin >> n >> m;
    for (int i = 0; i < m; i++) o = o + '0';
    for (int i = 0; i < m; i++) r = r + '1';
    vector<string> feild(n, o), res_feild(n, "");
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> y >> x;
        feild[y - 1][x - 1] = '1';
    }
    for (int i = 0; i < n; i++) res_feild[i] = feild[i];
    while (f != 1) {
        ch = 0;
        mass++;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (feild[i][j] == '1') {
                    if (i >= 1) res_feild[i - 1][j] = '1';
                    if (j >= 1) res_feild[i][j - 1] = '1';
                    if (i < n - 1) res_feild[i + 1][j] = '1';
                    if (j < m - 1) res_feild[i][j + 1] = '1';
                }
            }
        }
        for (int i = 0; i < n; i++) feild[i] = res_feild[i];
        for (auto i : feild) if (i == r) ch++;
        if (ch == n) f = 1;
    }
    cout << mass;
}