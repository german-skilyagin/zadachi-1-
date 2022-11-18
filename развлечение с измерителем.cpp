#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

struct Point
{
    int x;
    int y;
};
double func(double x0, double y0, double x1, double y1) {
    return sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
}
int main() {
    int n;
    cin >> n;
    vector<Point>arr(n + 5);
    set<double>res;

    for (int i = 0; i < n; i++) {

        cin >> arr[i].x >> arr[i].y;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
        {
            int x0 = arr[i].x;
            int y0 = arr[i].y;
            int x1 = arr[j].x;
            int y1 = arr[j].y;
            res.insert(func(x0, y0, x1, y1));
        }
    }
    cout << res.size() << endl;
    cout.precision(20);
    for (auto i : res)
        cout << fixed << i << endl;
}