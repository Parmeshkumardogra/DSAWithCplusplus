#include<iostream>
using namespace std;

void findLastOccurence(int arr[], int size, int &ansIndex, int target){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            ansIndex = mid;
            start = mid + 1;
        }else if(arr[mid] > target){
            end = mid -1;   
        }else {
            start = mid + 1; 
        }
    }

}

int main(){
    int arr[] = {10,20,40,50,60,60,60,60,60,70};
    int size = 10;
    int ansIndex = -1; 
    int target = 60;
    findLastOccurence(arr, size, ansIndex, target);
    if(ansIndex == -1){
        cout <<"target not found "<<ansIndex <<endl;
    }else{
        cout<<"target found "<<ansIndex<<endl;
    }
    return 0;
}