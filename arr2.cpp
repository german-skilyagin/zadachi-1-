#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = { 1,3,3,5,6,7,9,10 }, b = { 2,3,4,7,8,10,11 }, summ, comb, diff;
    for (int i = 0; i < b.size(); i++) {
        summ.push_back(b[i]);
    }
    for (int i = 0; i < a.size(); i++) {
        summ.push_back(a[i]);
    }
    sort(summ.begin(), summ.end());

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) {
                comb.push_back(a[i]);
                a.erase(a.begin() + i);
                b.erase(b.begin() + j);
                i--;
                j--;
            }
        }
    }
    for (auto i : comb) summ.erase(find(summ.begin(), summ.end(), i));
    sort(comb.begin(), comb.end());
    for (auto i : summ) diff.push_back(i);
    for (auto i : comb) diff.erase(find(diff.begin(), diff.end(), i));
    for (auto i : summ) cout << i << ' ';
    cout << endl;
    for (auto i : comb) cout << i << ' ';
    cout << endl;
    for (auto i : diff) cout << i << ' ';
}