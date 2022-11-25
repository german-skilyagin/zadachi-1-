#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    long long n, k, s = 0;
    cin >> n >> k;
    vector<long long> a(n);
    vector<long long> res(k);
    for (auto& i : a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < res.size(); ++i) {
        for (int j = a.size() - 1 - i; j >= 0; j -= k) {
            s += (res[i] + 1) * a[j];
            ++res[i];
        }
    }
    cout << s;
    return 0;
}