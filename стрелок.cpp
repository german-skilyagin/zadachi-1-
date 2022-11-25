#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, s = 0;
    cin >> n;

    vector <int> x(n);
    vector <int> y(n);
    vector <bool> z1(n, 1);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n - 1; i++)
        if (z1[i])
            for (int v = i + 1; v < n; v++)
                if ((z1[v]) && (x[i] * y[v] == x[v] * y[i]) && x[i] * x[v] >= 0 && y[i] * y[v] >= 0)
                    z1[v] = 0;
    for (int i = 0; i < n; i++) s += z1[i];
    cout << s;
    return 0;
}
