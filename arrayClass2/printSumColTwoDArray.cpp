#include<iostream>
using namespace std;

void printColSum(int arr[][3],int rowSize, int colSize){
    for(int i=0; i<rowSize; i++){
        int sum=0;
        for(int j=0; j<colSize; j++){
            sum+=arr[j][i];
        }
        cout<<"col "<<i<<" with sum "<<sum<<endl;
    }
}
int main(){

    int arr[3][3]={
        {10,20,30},{40,50,60},{70,80,90}
    };
    int rowSize=3;
    int colSize=3;
    printColSum(arr,rowSize,colSize);
    return 0;
}