#include<iostream>
#include<vector>
using namespace std;
//leetCode 702
int binarySearch(vector<int> arr, int target){
    int size = arr.size();
    int s = 0;
    int e = size-1;
    while(s<=e){
        int mid = s + (e - s)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid] > target){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {-1,0,3,5,9,12};
    int ans = binarySearch(arr, 9);
    if(ans == -1){
        cout<<"target not found "<<endl;
        
    }else{
       cout<<"target found on index "<<ans<<endl;
    }
}