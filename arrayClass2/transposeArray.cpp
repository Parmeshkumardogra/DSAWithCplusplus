#include <iostream>
using namespace std;

void transposeOriginalArray(int arr[][3], int rowSize, int colSize){
    for(int i=0; i<rowSize; i++){
        for(int j=i; j<colSize; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transposeUsingNewArray(int arr[][3], int rowSize, int colSize){
    int ans[3][3];
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            ans[i][j]=arr[j][i];
        }
    }
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][3] = {
        {10, 20, 30}, 
        {40, 50, 60}, 
        {70, 80, 90}
    };

    int rowSize = 3;
    int colSize = 3;
    transposeUsingNewArray(arr,rowSize,colSize);
    return 0;
}