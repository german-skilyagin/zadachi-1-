#include <iostream>

using namespace std;
int main() {
    int a, z, x;
    z = 1;
    cin >> a;
    while (z != 0) {
        if (a == 1) break;
        if (a % 2 != 0) {
            z = 0; 
        }
        else {
            cout << a << " " << endl;
            a = a / 2;
            z++;
            cout << z << " ";
        }
    }
    while (a % 5 == 0) {

        a = a / 5;
        cout << a << " " << endl;
        cout << z << "a ";
        ++z;
        if (a % 5 != 0) {
            z = 0;
            break;
        }
        if (a == 1) break;

    }
    while (a % 2 == 0) {
        if (a % 2 != 0) {
            z = 0;
            break;
        }
        else {
            cout << a << " " << endl;
            a = a / 2;
            ++z;
            cout << z << "2 ";
            if (a % 5 != 0) {
                z = 0;
                break;
            }
            if (a == 1) break;
        }
    }
    if (z > 0) cout << "No";
    else cout << "YES";
    return 0;
}