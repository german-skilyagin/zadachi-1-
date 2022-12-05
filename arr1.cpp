#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int i, n, k, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    cin >> k;
    j = a[0];
    for (i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n] = j;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}