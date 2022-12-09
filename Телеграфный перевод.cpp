
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n107 = n / 107;
    int rem = n % 107;
    int toSend = n107 * 100;
    int toPay = n107 * 7;
    if (rem >= 8) {
        toSend += rem - 7;
        toPay += 7;
    }
    cout << toSend <<  " " << toPay;
    return 0;
}