#include <iostream>

using namespace std;

int main()
{
    string s, s1;
    cin >> s;
    int n;
    cin >> n;
    s1 = s;
    if (n > 0)
        for (int i = 0; i < n - 1; ++i)
            if (s.size() > 1023) {
                cout << s.substr(0, 1023);
                return 0;
            }
            else
                s += s1;
    else {
        if (s.size() % abs(n)) {
            cout << "NO SOLUTION";
            return 0;
        }
        else {
            int k = s.size() / abs(n);
            int k1 = k;
            while (s.size() > k) {
                if (s.substr(0, k1) == s.substr(k, k1))
                    k += k;
                else {
                    cout << "NO SOLUTION";
                    return 0;
                }
            }
            cout << s.substr(0, k1);
            return 0;
        }
    }
    cout << s;
    return 0;
}