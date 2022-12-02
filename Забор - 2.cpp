#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000] = { 0 };
    for (int z = 0; z < n; z++) cin >> a[z];
    if (n < 3) {
        cout << -1; return 0;
    }
    double smax = 0.0;
    int im, jm, zm;
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int z = j + 1; z < n; z++) {
                if (a[i] + a[j] < a[z]) break;
                double p = (a[i] + a[z] + a[j]) / 2.0;
                double s = p * (p - a[j]) * (p - a[z]) * (p - a[i]);
                if (s > smax) {
                    smax = s;
                    im = i;
                    jm = j;
                    zm = z;
                }
            }
    if (smax == 0) {
        cout << -1;
        return 0;
    }
    cout << fixed << setprecision(7) << sqrt(smax) << endl;
    cout << setprecision(0) << im + 1 << " " << jm + 1 << " " << zm + 1;
    return 0;
}