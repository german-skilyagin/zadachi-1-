#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 45;
    else
        if (n == 2)
            cout << 4905;
        else {
            cout << 494;
            for (int i = 0; i < n - 3; ++i)
                cout << 9;
            cout << 55;
            for (int i = 0; i < n - 2; ++i)
                cout << 0;
        }
    return 0;
}