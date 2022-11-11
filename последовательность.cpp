#include <string>
#include <iostream>

using namespace std;

int main()
{
    string str, result;
    cin >> str;
    int k = 0;
    int position = str.find('1');
    while (position + 1) 
    {
        k = 0;
        for (int i = position - 1; i >= 0; --i)
        {
            if (str[i] == '0')
                k++;
            else
                break;
        }
        result.push_back(97 + k);
        position = str.find('1', position + 1);
    }
    cout << result;
    return 0;
}