#include <iostream>
using namespace std;

void printAllTriplet(int arr[], int size, int target)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    count++;
                }
            }
        }
    }
    cout << "total triplet pair is " << count;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    int target = 60;
    printAllTriplet(arr, size, target);
    return 0;
}