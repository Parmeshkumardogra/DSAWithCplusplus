#include<iostream>
#include<algorithm>
using namespace std;

void binarySearch(int arr[],int size, int &missingValue){
    int start =0;
    int end  = size - 1;
    while(start <= end){
       int mid = start + (end - start)/2;
       if(mid == arr[mid]){
        start = mid + 1;
       }else if(mid < arr[mid]){
        missingValue = mid;
        end = mid - 1;
       }
    }
}
int main(){
    int arr[] ={2,0,1}; //0,1,3
    int size =3;
    int missingValue = -1;
    sort(arr, arr + size);
    binarySearch(arr, size, missingValue);
    if(missingValue == -1){
        cout<<"no missing value found"<<endl;
    }else{
        cout<<"missing value is "<<missingValue<<endl;
    }

    
}