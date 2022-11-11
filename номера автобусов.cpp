#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    string a = "0123456789";
    string b = "ABCEXCMTPHKY";
    for (int i = 0; i < n; ++i) {
        cin >> str;
        if (str.size() != 6) {
            cout << "No" << endl;
            continue;
        }
        int position = a.find(str[0]);
        if (position == -1) {
            cout << "No" << endl;
            continue;
        }
        position = b.find(str[1]);
        if (position == -1) {
            cout << "No" << endl;
            continue;
        }
        position = b.find(str[2]);
        if (position == -1) {
            cout << "No" << endl;
            continue;
        }
        position = b.find(str[3]);
        if (position == -1) {
            cout << "No" << endl;
            continue;
        }
        position = a.find(str[4]);
        if (position == -1) {
            cout << "No" << endl;
            continue;
        }
        position = a.find(str[5]);
        if (position == -1) {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
    return 0;
}