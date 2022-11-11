#include <fstream>
#include <iostream>

using namespace std;

char p[100][100], ch;
int main() {

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n, m, cell, r, g, b;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> p[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> cell;
            r = cell / 4;
            g = cell / 2 % 2;
            b = cell % 2;
            ch = p[i][j];

            if (ch == 'B' && !b || ch == 'G' && !g || ch == 'R' && !r){
                    cout << "NO";
                return 0;
            }

        }
    cout << "YES";
}