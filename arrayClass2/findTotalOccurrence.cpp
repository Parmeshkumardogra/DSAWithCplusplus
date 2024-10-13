#include<iostream>
using namespace std;

void findFirstOcc(int arr[], int size, int target, int &firstOccIndex){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if (target == arr[mid]){
            firstOccIndex = mid;
            end = mid - 1; //helps to identify the first occurrence by moving towards left
        }else if(target > arr[mid]){
            start = mid + 1;
        }else {
            end = mid - 1;
        }
    }
}


void findLastOcc(int arr[], int size, int target, int &lastOccIndex){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(target == arr[mid]){
            lastOccIndex = mid;
            start = mid + 1; //helps to identify the last occurrence by moving towards right
        }else if(target > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
}

int main(){
    int arr[] = {10,20,20,20,20,20,20,30,30,40};
    int size = 10;
    int target = 10;
    int firstOccIndex = -1;
    int lastOccIndex = -1;
    findFirstOcc(arr, size, target, firstOccIndex);
    findLastOcc(arr, size, target, lastOccIndex);
    if(firstOccIndex == -1 & lastOccIndex == -1) {
        cout<<"total occurrence not found"<<endl;
    }else{
        cout<<"total occurrence would be "  <<(lastOccIndex - firstOccIndex) + 1 << endl;
    }
    return 0;
}