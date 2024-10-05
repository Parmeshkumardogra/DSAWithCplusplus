#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' - 1; // intialised by 64
        for (int j = 0; j < i + 1; j++)
        {
            ch++;
            cout << ch;
        }
        for(int k=0; k<i; k++){
            ch--;
            cout<<ch;
        }
        cout << endl;
    }

    return 0;
}