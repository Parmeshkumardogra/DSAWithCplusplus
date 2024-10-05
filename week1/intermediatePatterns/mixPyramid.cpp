#include <iostream>
using namespace std;

void printUpperMixPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < (2 * i) + 1; k++)
        {
            cout << "  ";
        }
        for (int l = 0; l < n - i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printLowerMixPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < (2 * (n - i)) - 1; k++)
        {
            cout << "  ";
        }
        for (int l = 0; l < i + 1; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    printUpperMixPyramid(n);
    printLowerMixPyramid(n);
    return 0;
}