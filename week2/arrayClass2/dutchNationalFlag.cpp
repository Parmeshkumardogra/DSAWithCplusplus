#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 1, 2, 0, 2, 1, 1, 0};
    int size = 10;
    int i = 0;
    int j = size - 1;
    int countZeros = 0;
    int countOnes = 0;
    int countTwos = 0;

 for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            countZeros++;
        } else if (arr[i] == 1) {
            countOnes++;
        } else {
            countTwos++;
        }
    }
    countTwos = size - (countZeros + countOnes);
    fill(arr, arr + countZeros, 0);
    fill(arr + countZeros, arr + countZeros + countOnes, 1); // how to specify base and end address for fill ones and twos;
    fill(arr + countZeros + countOnes, arr + size, 2);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
