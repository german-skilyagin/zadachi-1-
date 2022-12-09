#include <iostream>

using namespace std;

int main()
{
    int n, k, x = 1, tempx;
    cin >> n >> k;

main_label:
    tempx = x;
    for (int i = 0; i < n; ++i) {
        if (tempx % n == k)
            tempx -= tempx / n + k;
        else {
            ++x;
            goto main_label;
        }
    }

    cout << x;
    return 0;
}