#include <iostream>
using namespace std;

int main()
{
    int n, m, h, max = INT_MIN, min;
    cin >> n >> m;
    int* max_in_col = new int[m];
    for (int i = 0; i < m; ++i)
        max_in_col[i] = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        min = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            cin >> h;
            if (h < min) min = h;
            if (h > max_in_col[j]) max_in_col[j] = h;
        }
        if (min > max) max = min;
    }
    min = max_in_col[0];
    for (int j = 0; j < m; ++j)
        if (max_in_col[j] < min)
            min = max_in_col[j];

    cout << max << " " << min;

    delete[] max_in_col;
    return 0;
}