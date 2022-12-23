#include <iostream>

using namespace std;


unsigned steps(int x1, int y1, int x2, int y2)
{
    x2 -= x1;
    y2 -= y1;

    if (x2 % 2 == 0 && y2 % 2 != 0 || x2 % 2 != 0 && y2 % 2 == 0)
        return 0;
    else if (x2 == y2 || x2 == -y2)
        return 1;
    else
        return 2;
}

int main()
{
    int x, x2, y, y2;
    cin >> x >> y >> x2 >> y2;
    
     cout << steps(x, y, x2, y2);
    
}