#include <iostream>
using namespace std;

bool twoSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
pair<int,int> twoSumFunc(int arr[], int size, int target){
    pair<int,int> ans = make_pair(-1,-1);
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i]+arr[j]==target){
                ans.first=arr[i];
                ans.second=arr[j];
                return ans;
            }
        }
    }
    return ans;
}
int main()
{
    int arr[] = {10, 5, 20, 15, 30};
    int size = 5;
    int target = 60;
    pair<int,int> ans = twoSumFunc(arr,size,target);
    if(ans.first == -1 && ans.second == -1) {
       cout<<"pair not found"<<endl;
    }
    else{
        cout<<"pair found as "<<ans.first <<" & "<<ans.second<<endl;
    }
    return 0;
}