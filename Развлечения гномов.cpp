#include <iostream>
#include <string>
using namespace std;

string kal(int osn, int c) {
    string num = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string k = "";
    while (c > 0) {
        k = num[c % osn] + k;
        c /= osn;
    }
    return k;
}

int main() {
    string s, d = "", m = "", g = "";
    cin >> s;
    int i = 0;
    while (s[i] != '/') {
        d = d + s[i]; i++;
    }

    i++;
    while (s[i] != '/') {
        m = m + s[i]; i++;
    }

    i++;

    while (i < s.length()) {
        g = g + s[i]; i++;
    }

    int dn, mn, gn;
    dn = stoi(d); mn = stoi(m); gn = stoi(g);
    int osn = dn + 1;
    d = kal(osn, dn);
    m = kal(osn, mn);
    g = kal(osn, gn);

    cout << d << '/' << m << '/' << g;
    return 0;
}