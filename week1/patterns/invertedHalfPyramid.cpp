#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the rows" << endl;
    cin >> n;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}