#include<iostream>
using namespace std;
void findFirstOccurrence(int arr[], int size, int target, int *ans){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        int mid = (start + (end - start)/2);
        if(arr[mid]==target){
            cout<<arr[mid]<< " "<< target<<endl;
            *ans = mid;
            end = mid - 1;
        }else if(arr[mid] > target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
}

int main(){
    int arr[] = {5,10,20,20,20,20,30,40,50,60,70};
    int size = 11;
    int target = 200;
    int ans = -1;
    findFirstOccurrence(arr,size,target,&ans);
    if(ans == -1) {
        cout<<"target not found"<<ans<<endl;
    }else {
        cout<<"first occurence found on index : "<<ans<<endl;
    }
    return 0;
}