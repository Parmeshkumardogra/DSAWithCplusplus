#include<iostream>
using namespace std;
bool searchTargetInTwoDArray(int arr[][2],int rowSize, int colSize, int target){
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][2]={
        {10,20},
        {30,40},
        {50,60},
    };
    int rowSize = 3;
    int colSize = 2;
    int target =50;
    bool ans = searchTargetInTwoDArray(arr,rowSize,colSize,target);
    cout<<"answer "<<ans<<endl;
    return 0;
}
