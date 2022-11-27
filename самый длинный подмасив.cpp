#include <iostream>
using namespace std;

int subarray(int arr[], int n)
{

    int ans = 1, temp = 1;

    for (int i = 1; i < n; i++) {

        if (arr[i] == arr[i - 1]) {
            ++temp;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);


    return ans;
}


int main()
{
    int arr[] = {1, 2, 3, 3, 3, 2, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

  
    cout << subarray(arr, n);

    return 0;
}