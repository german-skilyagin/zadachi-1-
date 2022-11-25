#include <iostream>
#include<vector>
#include <algorithm>


using namespace std;
int main()
{
    int n, m;
    string t;
    cin >> n;
    vector<string> f;
    vector<string> mt;
    vector<string> a;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        f.push_back(t);
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> t;
        a.push_back(t);
    }
    if (n == 0 && m == 0) {
        cout << "Friends:" << endl;
        cout << "Mutual Friends:" << endl;
        cout << "Also Friend of:" << endl;
        return 0;
    }
    if (n == 0 && m) {
        cout << "Friends:" << endl;
        cout << "Mutual Friends:" << endl;
        cout << "Also Friend of: ";
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size() - 1; ++i)
            cout << a[i] << ", ";
        if (a.size())
            cout << a[a.size() - 1] << endl;
        return 0;
    }
    if (n && m == 0) {
        cout << "Friends: ";
        sort(f.begin(), f.end());
        for (int i = 0; i < f.size() - 1; ++i)
            cout << f[i] << ", ";
        if (f.size())
            cout << f[f.size() - 1] << endl;
        cout << "Mutual Friends:" << endl;
        cout << "Also Friend of:" << endl;
        return 0;
    }
    if (f.size())
        sort(f.begin(), f.end());
    if (mt.size())
        sort(mt.begin(), mt.end());
    for (int i = 0; i < f.size(); ++i) {
        if (a.size() == 0)
            break;
        for (int j = 0; j < a.size(); ++j) {
            if (f[i] == a[j]) {
                mt.push_back(a[j]);
                a.erase(a.begin() + j);
                --j;
                if (a.size() == 0)
                    break;
            }
        }
    }
    if (a.size())
        sort(a.begin(), a.end());
    cout << "Friends: ";
    for (int i = 0; i < f.size() - 1; ++i)
        cout << f[i] << ", ";
    if (f.size())
        cout << f[f.size() - 1] << endl;
    cout << "Mutual Friends: ";
    if (mt.size())
        for (int i = 0; i < mt.size() - 1; ++i)
            cout << mt[i] << ", ";
    if (mt.size())
        cout << mt[mt.size() - 1];
    cout << endl;
    cout << "Also Friend of: ";
    if (a.size() == 0) {
    }
    else {
        for (int i = 0; i < a.size() - 1; ++i)
            cout << a[i] << ", ";
        if (a.size() > 0)
            cout << a[a.size() - 1] << endl;
    }
    return 0;
}