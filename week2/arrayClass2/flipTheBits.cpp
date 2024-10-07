#include<iostream>
using namespace std;
void flipTheBits(int arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            arr[i]=1;
        }else{
            arr[i]=0;
        }
    }
}
int main(){
    int arr[] = {0,0,1,0,1,0};
    int size = 6;
    flipTheBits(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}