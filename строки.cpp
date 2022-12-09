#include <set>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s, s1;
    int k = 0;
    cin >> s >> s1;
    set<string> a;
    for (int i = 0; i < s1.size(); ++i) {
        a.insert(s1.substr(s1.size() - i - 1) + s1.substr(0, s1.size() - i - 1));
    }
    for (auto i : a) {
        int pos = s.find(i);
        while (pos + 1) {
            ++k;
            pos = s.find(i, pos + 1);
        }
    }
    cout << k;
    return 0;
}