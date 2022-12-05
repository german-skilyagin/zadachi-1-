#include <iostream>

using namespace std;
int main()
{
    int x, i, z, w;
    int t = 0;
    cin >> w;
    x = w;
    i = w * w;
    for (int y = 0; y < w; y++) {
        z = i - y * y;
        while (((x * x) >= z) && (x >= 0))x--;
        t += x + 1;
    }
    cout << t * 4;
}