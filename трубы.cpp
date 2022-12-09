#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, pair<int, int> > >a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    sort(a.begin(), a.end());
    int t, ans = 0;
    cin >> t;
    for (int i = 0; i < n; i++) {
        if (ans < 0) ans = 0;
        if (i + 1 < n && a[i].first <= a[i + 1].first && a[i + 1].first < a[i].second.first && (a[i].second.second < 0)) {
            for (int j = a[i].first; j < a[i + 1].first; j++) {
                if (j >= t) break;
                ans += a[i].second.second;
            }
            if (ans < 0) ans = 0;
            for (int j = a[i + 1].first; j < min(a[i + 1].second.first, a[i].second.first); j++) {
                if (j >= t) break;
                ans += a[i].second.second + a[i + 1].second.second;
            }
            if (ans < 0) ans = 0;
            for (int j = min(a[i + 1].second.first, a[i].second.first); j < max(a[i].second.first, a[i + 1].second.first); j++) {
                if (j >= t) break;
                ans += a[i + 1].second.second;
            }
            i++;
        }
        else
            for (int j = a[i].first; j < a[i].second.first; j++) {
                if (j >= t) break;
                ans += a[i].second.second;
            }

    }
    cout << (ans < 0 ? 0 : ans);
}