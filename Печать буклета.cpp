#include <iostream>
using namespace std;

void f1(int num, int** mat, int i, int& l, int& r, int st) {
    if (st == 0) {
        mat[i][1] = 1;
        if (num >= r) {
            mat[i][2] = r;
            r--;
        }
        else {
            mat[i][2] = 0;
            r--;
        }
        if (num >= l) {
            mat[i][3] = l;
            l++;
        }
        else {
            mat[i][3] = 0;
            l++;
        }
    }
    if (st == 1) {
        mat[i][1] = 2;
        if (num >= l) {
            mat[i][2] = l;
            l++;
        }
        else {
            mat[i][2] = 0;
            l++;
        }

        if (num >= r) {
            mat[i][3] = r;
            r--;
        }
        else {
            mat[i][3] = 0;
            r--;
        }
    }
}
int main()
{
    int num, list;
    cin >> num;
    list = num / 4;
    if (num % 4 != 0) {
        list++;
    }
    int l = 1, r = list * 4;
    int k = 0, s = 0;
    int stranic = list * 2;

    int** mat = new int* [stranic];
    for (int i = 0; i < 2 * list; i++) {
        mat[i] = new int[4];
    }
    for (int i = 0; i < stranic; i++) {
        if (i % 2 == 0) {
            s++;
            mat[i][0] = s;
        }
        else {
            mat[i][0] = s;
        }
        k %= 2;
        f1(num, mat, i, l, r, k);
        k++;
    }
    for (int i = 0; i < stranic; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}