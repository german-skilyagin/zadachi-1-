#include <iostream>
using namespace std;
int main()
{
    int R, r, h,b;
    cin >> R >> r >> h >> b;
    if (b + R/2 > h) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}

