#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40};
    int size =4;
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            // if(i==j) continue;
         cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
    return 0;
}