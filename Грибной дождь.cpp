#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    double t;
    cin >> n >> t;
    vector <double> x(n);
    vector <double> y(n);
    vector <double> z(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
        if (n == 1) {
            cout << t;
            return 0;
        }
    }
    double res = 200;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            double l = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            l = l - z[i] - z[j];
            if (l <= 0) {
                cout << "0.00"; 
                return 0;
            }
            if (l < res) {
                res = l;
            }
        }
    if (res / 2 > t) { 
        cout << t;
        return 0; 
    }
    else {
        cout << res / 2;
    }
    return 0;
}
