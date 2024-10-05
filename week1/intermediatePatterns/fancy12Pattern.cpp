#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int count = 0; //counter is used to track the count of prineted value
        for (int j = 0; j < i + 1; j++)
        {
            int valuePrint = i+1;
            cout << valuePrint;
            count++;
            if (count < valuePrint)// if count is less than the printed count then we have to print * otherwise we skip to print star
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}