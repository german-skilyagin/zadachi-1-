#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long double n, r = 4000, l = 30, m = 0, p = 0, cur = 0;
    cin >> n;
    long long h;
    string s;
    cin >> p;
    for (int i = 1; i < n; i++)
    {
        cin >> cur >> s;
        if (cur == p)
            continue;
        m = (p + cur) / 2;
        if (cur > p && s == "closer")
            l = max(l, m);
        else
            r = min(r, m);
        if (cur < p && s == "further")
            l = max(l, m);
        else
            r = min(r, m);
        p = cur;
    }
    cout << fixed << setprecision(10) << l << " ";
    cout << fixed << setprecision(10) << r;
}