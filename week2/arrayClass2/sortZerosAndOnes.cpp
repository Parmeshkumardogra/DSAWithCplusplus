#include<iostream>
using namespace std; 

// we can also use two pointers
void sortZerosAndOnes(int arr[], int size){
    int countZeros = 0;
    int countOnes = 0;
    for(int i=0; i< size; i++){
        if(arr[i]==0){
            countZeros++;
        }
        else{
            countOnes++;
        }
    }
    for(int i=0;i<countZeros; i++){
        arr[i]=0;
    }
    for(int i=countZeros;i<size;i++){
        arr[i]=1;
    }
    cout<<"sorting result"<<endl;
    for(int i=0; i<size;i++){
        cout<<arr[i]<<endl;;
    }

}

int main(){
    int arr[5]={0,1,0,1,0};
    int size = 5;

    sortZerosAndOnes(arr,size);

    return 0;
}
