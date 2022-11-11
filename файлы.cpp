#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string file1, file2, file3;
    cin >> file1 >> file2 >> file3;
    ifstream input1(file1);
    ifstream input2(file2);
    ofstream output(file3);
    if (!input1 || !input2) {
        cout << "Attention, error!" << endl;
        return 0;
    }
    int x1, x2;
    string arr[11] = { " ", "tenth", "twentieth", "thirtieth", "fortieth", "fiftieth", "sixtieth", "seventies", "восмидесятая", "ninetieth", "hundredth" };
    int i = 0;
    int arrind = 0;
    while (!input1.eof())
    {
        input1 >> x1;
        if ((i % 10) == 0 && (i != 0))
        {
            output << arr[((i + 1) / 10)] << endl << endl;
        }
        if (x1 > 0)
        {
            i ++;
            output << x1 << endl;
            continue;
        }
        else
        {
            continue;
        }

    }
    while (!input2.eof())
    {
        input2 >> x2;
        if ((i % 10) == 0 && (i != 0))
        {
            output << arr[((i + 1) / 10)] << endl << endl;
        }
        if (x2 > 0)
        {
            i ++;
            output << x2 << endl;
            continue;
        }
        else
        {
            continue;
        }

    }
    input1.close();
    input2.close();
    output.close();
}
