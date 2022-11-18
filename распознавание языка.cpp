
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, pos;
    string s;
    cin >> num;
    bool b = false, b1 = false, b2 = false, d = false;
    for (int i = 0; i < num; ++i) {

        cin >> s;
        b = false; b1 = false; b2 = false; d = false;
        if (s[0] != '0') {
            cout << "NO";
            d = true;
        }
        else {
            b = true;
            for (int j = 1; j < s.size(); ++j) {
                if (s[j] == '0')
                    if (b && (b1 || b2)) {
                        cout << "NO";
                        d = true;
                        break;
                    }
                if (s[j] == '1') {
                    if (b2) {
                        cout << "NO";
                        d = true;
                        break;
                    }
                    else
                        b1 = true;
                }
                if (s[j] == '2')
                    if (!b1) {
                        cout << "NO";
                        d = true;
                        break;
                    }
                    else
                        b2 = true;
            }
            if (!d) {
                pos = s.find("1");
                if ((s.size() - 1 - pos - 1) == (pos - 1) * 2)
                    cout << "YES";
                else
                    cout << "NO";
            }
        }
        cout << endl;
    }
    return 0;
}