#include <iostream>

using namespace std;

int main()
{
    int N, x;
    long int arr[202];
    cin >> N;

    for (int i = 0; i < 201; i++)
        arr[i] = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> x;
        arr[x + 100] = arr[x + 100] + 1;
    }

    for (x = 0; x < 201; x++)
    {
        for (int i = 0; i < arr[x]; i++)
        {
            cout << x - 100 << " ";
        }
    }
    return 0;
}