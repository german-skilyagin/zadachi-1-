#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    a.push_back(3);
    for (int i = 1; i < n; ++i) {
        a.push_back(a[i - 1] * 2);
    }
    cout << a[n - 1];
    return 0;
}