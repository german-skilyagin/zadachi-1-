#include <iostream>
#include <vector>
using namespace std;

void keyb(vector<int>& a, int length)
{
    int num;
    for (int i = 0; i < length; ++i)
    {
        cin >> num;
        a.push_back(num);
    }
}

void erase(vector<int>& a, size_t n)
{
    a.erase(a.begin(), a.begin() + n);
}

int main()
{
    int s = 0;
    int length;
    int i = 0;
    vector<int> a;
    cin >> length;
    keyb(a, length);
    while (a.size() > 2)
    {
        if (a[0] == 10){
            if (((a[1] + a[2]) != 10) && (a[1] != 10 && a[2] != 10)){
                s += 10 + 2 * a[1] + 2 * a[2];
                erase(a, 3);
            }
            else{
                s += 10 + a[i + 1] + a[i + 2];
                erase(a, 1);
            }
        }
        else if (a[0] + a[1] == 10){
            if ((a[2] != 10) && ((a[2] + a[3]) != 10)){
                s += 10 + 2 * a[2];
                erase(a, 3);
            }
            else{
                s += 10 + a[2];
                erase(a, 2);
            }
        }
        else{
            if (a[1] != 10){
                s += a[0] + a[1];
                erase(a, 2);
            }
            else{
                s += a[0];
                erase(a, 1);
            }

        }

    }
    if (a.size() > 1)
    {
        if (a[0] == 10){

            s += 10 + a[1];
            erase(a, 1);
        }
        else {
            s += a[0];
        }
        erase(a, 1);
    }
    if (!a.empty()){
        s += a[0];
    }
    if (s > 300){
        s = 300;
    }
    cout << s;
    return 0;

}
