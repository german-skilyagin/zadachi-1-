#include<iostream>
#include<string>
using namespace std;

bool CS(string a, string b)
{
    if (a.size() > b.size())
        return 1;
    if (a.size() == b.size())
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] > b[i]) return 1;
            if (a[i] < b[i]) return 0;
        }
    return 0;
}

int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    d = a;
    if (CS(b, d)) d = b;
    if (CS(c, d)) d = c;
    cout << d;
    return 0;
}