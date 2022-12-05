#include <iostream>

using namespace std;

int main() {

    int n, m, a, b;
    cin >> n >> m;
    n--;
    m--;
    a = n;
    b = m;
    while ((a > 0) && (b > 0)){
        if (a > b){
            a %= b;
        }
        else{
            b %= a;
        }
    }
    cout << n + m - a - b;
    return 0;
}