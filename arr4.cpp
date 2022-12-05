#include <string>
#include <iostream>

using namespace std;

int main() {
    float a, b;
    int n = 1, m, x = 0;
    string c;
    cin >> a >> b;
    c = to_string(a / b);
    for (int j = 1; j <= (c.size() / 2) - 1; j++) {
        for (int i = j + 2; i < c.size() - 1; i++) {
            if (c[i] == c[i - j]) {
                n += 1;
            }
            else {
                n = 1;
            }
        }
        if (n != 1) {
            m = j;
            x = 1;
            break;
        }
    }
    while (n > 0) {
        c.erase(c.end() - n);
        n--;
    }
    if (x == 1) {
        c = c + ')';
        c.insert(c.end() - (m + 1), '(');
    }
    cout << c;
}