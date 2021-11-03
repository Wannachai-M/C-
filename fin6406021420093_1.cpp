#include <cstring>
#include <iostream>
#include <string.h>
using namespace std;
void match(char number[]);
int main()
{
    int x;
    char num[100] = {};
    cout << "Enter 13 integers : ";
    cin >> num;
    x = strlen(num) - 1;
    for (int i = 0; i <= strlen(num) - 1; i++)
    {}
    match(num);
    return 0;
}
void match(char number[])
{
    bool flag = true;
    int x = (strlen(number) - 1);
    for (int i = 0; i <= x; i++)
    {
        if (number[i] != number[x])
        {
            flag = false;
        }
        x--;
    }
    if (flag == false)
    {
        cout << "Not symmetry.  " << endl;
    }
    else
    {
        cout << "symmetry.  ";
    }
}