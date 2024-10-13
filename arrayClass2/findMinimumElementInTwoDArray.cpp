#include<iostream>
using namespace std;

int main(){
    int arr[3][3] ={
        {70,23,41},
        {27,69,42},
        {56,12,-2}
    };
    int rowSize = 3;
    int colSize = 3;
    int minimumValue = INT32_MAX;
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            if(minimumValue > arr[i][j]){
                minimumValue = arr[i][j];
            }
        }
    }
    cout<<"minimumValue "<<minimumValue<<endl;
    return 0;
}