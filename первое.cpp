#include <iostream>
using namespace std;
int main()
{
    int s, max = 0;
    cin >> s;
    int* number = new int[s];
    for (int i = 0; i < s; i++) {
        cin >> number[i];
    }
    for (int i = 1; i < s; i++)
        if (number[i] > number[max])
            max = i;
    cout << number[max];
}