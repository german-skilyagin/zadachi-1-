#include <string>
#include <iostream>
using namespace std;

int main() {
    int y, a, b, x = 0, i = 0;
    char t;
    string z = "";
    cin >> y >> a >> b;
    while (y > 0) {
        x += (y % 10) * pow(a, i);
        y /= 10;
        i++;
    }
    while (x > 0) {
        t = 48 + (x % b);
        y /= b;
        z += t;
    }
    cout << z;
}