#include <string>
#include <vector>
#include <iostream>


using namespace std;

int main()
{
    string s;
    string d;
    cin >> s;
    int t1 = 1;
    int t2 = 1;
    int t3 = 1;
    vector <int> N;
    N.push_back(0);
    for (int i = 0; i < s.size() || t3 < s.size(); ++i) {
        t3 = t2 + t1;
        t1 = t2;
        t2 = t3;
        N.push_back(t3 - 1);
    }
    for (int i = 0; i < N.size(); ++i)
        if (N[i] < s.size())
            cout << s.substr(N[i], 1);
    return 0;
}