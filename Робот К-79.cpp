#include <iostream>
#include <vector>
 
 
using namespace std;
 
int main(int argc, char* argv[])
{
    char program[200]="";
    cin>>program;
    char direction='a';
    vector<int> Y;
    vector<int> X;
    X.push_back(0); Y.push_back(0);
    unsigned long int x, y;// этим двум переменным присвойте значения 0
    unsigned long int counter=0;
    const unsigned long int num=sizeof(program)/(sizeof(program[0]));
    int q=0;
 
    for (unsigned long int i=0; i<num; i++)
    {
        switch (program[i])
        {
        case 'R':
            {
                switch (direction)
                {
                case 'a':
                    {
                        direction='b';
                        break;
                    }
                case 'b':
                    {
                        direction='c';
                        break;
                    }
                case 'c':
                    {
                        direction='d';
                        break;
                    }
                case 'd':
                    {
                        direction='a';
                        break;
                    }
                }
                break;
            }
        case 'L':
            {
                switch (direction)
                {
                case 'a':
                    {
                        direction='d';
                        break;
                    }
                case 'b':
                    {
                        direction='a';
                        break;
                    }
                case 'c':
                    {
                        direction='b';
                        break;
                    }
                case 'd':
                    {
                        direction='c';
                        break;
                    }
                }
                break;
            }
        case 'S':
            {
                 switch (direction)
                 {
                 case 'a':
                     {
                         x++;
                         break;
                     }
                 case 'b':
                     {
                         y++;
                         break;
                     }
                 case 'c':
                     {
                         x--;
                         break;
                     }
                 case 'd':
                     {
                         y--;
                         break;
                     }
                 }
                 
                 counter++;
                 for (unsigned long int i=0; i<X.size(); i++)
                 {
                     if ((X[i]==x)&&(Y[i]==y))
                     {
                         q=1;
                         goto exit;
                     }
                 }
 
                 
                 Y.push_back(y); X.push_back(x);
                 break;
            }
 
 
        }
    }
    exit:
        switch (q)
        {
        case 1:
            {
                int c = counter;
                cout<<c-3;
                break;
            }
        case 0:
            {
                
                int b = counter;
                cout<<b- 3;
                break;
            }
        }
   return 0;
}