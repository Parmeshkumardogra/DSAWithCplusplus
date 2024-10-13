#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 3, 4, 3, 2};
    int size = 5;
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "the single number would be " << ans;
}