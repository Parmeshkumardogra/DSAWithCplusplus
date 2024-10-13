#include<iostream>
using namespace std;

void rotateMyArray(int arr[], int size, int positionMovement){
    positionMovement = positionMovement % size;

    if(positionMovement == 0){
        return;
    }
    int tempArr[positionMovement];
    int index = 0;
    for(int i = size - positionMovement; i<size; i++){
        tempArr[index] = arr[i];
        index++;
    }

    for(int i=size-positionMovement -1; i>=0; i--){
        cout<<"positioning of array "<<"i th index "<<i+positionMovement<<" "<<arr[i+positionMovement]<<" "<<i<<" "<<arr[i]<<endl;;
        arr[i+positionMovement] = arr[i];
    }

    for(int i = 0; i<positionMovement; i++){
        arr[i] = tempArr[i];
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size = 6;
    int positionMovement = 8;

    rotateMyArray(arr, size, positionMovement);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}