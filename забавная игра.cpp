#include <iostream>

using namespace std;

int main()
{
    int n, m = 0, i, z, l, p, m1, rez;
    cin >> n;
    bool a[32] = { 0 }, b[16] = { 0 };
    m1 = n;
    while (n) {
        m++;
        n /= 2;
    }

    n = m1;
    m1 = m - 1;
    while (n) {
        a[m1--] = n % 2;
        n /= 2;
    }

    if (m == 0) cout << 0;
    else {
        for (i = 0; i < m; i++) a[i + m] = a[i];

        l = 0; z = 0; p = 0;

        for (i = 0; i < m * 2; i++)
            if (a[i]) l++;
            else {
                if (l > z) { z = l; p = i - l; }
                l = 0;
            }
        if (l > z) { z = l; p = i - l; }

        m1 = m - 1;
        for (i = 0; i < m; i++) b[m1--] = a[p++];

        n = 1;
        rez = 0;
        for (i = 0; i < m; i++, n *= 2) {
            rez += b[i] * n;
        }
        cout << rez;
    }
}