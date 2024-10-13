#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[3]={3,4,5};
    int n= 3;
    int val =4;
    bool ans = linearSearch(arr,n,val);
    cout<<ans<<endl;
}