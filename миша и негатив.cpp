#include <iostream>


using namespace std;

int main()
{
    int n, m, k = 0;
    cin >> n >> m;
    string str, str1, res;
    for (int i = 0; i < n; ++i) {
        cin >> res;
        str += res;
    }
    cout << endl;
    for (int i = 0; i < n; ++i) {
        cin >> res;
        str1 += res;
    }
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'W')
            str[i] = 'B';
        else
            str[i] = 'W';
    }
    for (int i = 0; i < str.size(); ++i)
        if (str[i] != str1[i])
            k++;
    cout << k;
    return 0;
}