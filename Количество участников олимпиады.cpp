#include <iostream>
using namespace std;
int main()
{
    int k, m, n, d;
    cin >> k >> m >> n >> d;
    int i = 1;
    bool b = true;
    while (b) {
        if (i % k == 0 && i % m == 0 && i % n == 0)
            if (i / k + i / m + i / n + d == i) {
                cout << i;
                return 0;
            }
        ++i;
        if (i > 10000) {
            cout << -1;
            return 0;
        }
    }
    return 0;
}
