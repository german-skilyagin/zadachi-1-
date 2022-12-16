#include <iostream>

using namespace std;

int main()
{
    int n, jj, s = 0;
    scanf("%d", &n);
    bool b = false;
    int a[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; ++i) {
        b = false;
        for (int j = i + 1; j < n; ++j)
            if (a[i] == a[j]) {
                jj = j;
                b = true;
                break;
            }
        if (b)
            if (jj - i > s)
                s = jj - i;
    }
    cout << s;
    return 0;
}